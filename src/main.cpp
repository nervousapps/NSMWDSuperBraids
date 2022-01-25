// MUST set AUDIO_BLOCK_SAMPLES to 16 or 32 (max) in AudioStream.h

#include <Arduino.h>
#include <Wire.h>
#include <MIDI.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <AudioPrivate.h>
#include <mtof.h>
#include <math.h>

// GUItool: begin automatically generated code
AudioMixer4              mainMix_LPT;
AudioMixer4              mainMix_RPT;
AudioMixer4              mainMix_LSG;
AudioMixer4              mainMix_RSG;
AudioControlSGTL5000     sgtl5000_1;
AudioOutputI2S           i2s1;           //xy=686,170
AudioInputI2S            input_i2s;           //xy=361,355
AudioOutputPT8211_2      pt8211_2_1;     //xy=703,281

AudioConnection          patchCord1(mainMix_LSG, 0, i2s1, 0);
AudioConnection          patchCord2(mainMix_RSG, 0, i2s1, 1);
AudioConnection          patchCord3(mainMix_LPT, 0, pt8211_2_1, 0);
AudioConnection          patchCord4(mainMix_RPT, 0, pt8211_2_1, 1);
// GUItool: end automatically generated code

#include <NervousSuperMother.h>
#include "main_settings.h"
#include "main_utils.h"

// Motherboard
NervousSuperMother * device = NervousSuperMother::getInstance();

MIDI_CREATE_DEFAULT_INSTANCE();

#include "synths/synths.h"

void onVolChange(float value) {
  // String line = "VOL : " + String((float)value/1024.0);
  // Serial.println(line);
  // device->updateLine(2, line);
  // AudioNoInterrupts();
  ampBraids_L.gain((float)value/512.0);
  ampBraids_R.gain((float)value/512.0);
  // sgtl5000_1.lineOutLevel(value/1000.0);
  // AudioInterrupts();
  // draw_progressbar(value/10);
}

FLASHMEM void setup() {
  Serial.begin(9600);

  while (!Serial && millis() < 2500); // wait for serial monitor

  // Starting sequence
  Serial.println("Ready!");

  // Configure the ADCs
  analogReadResolution(10);
  analogReadAveraging(16);

  // Init audio
  AudioMemory(300);

  AudioNoInterrupts();

  //Set up the PT8211 DAC
  // To be shure that it has started
  pt8211_2_1.begin();

  // Set up audio adaptor
  sgtl5000_1.enable();
  sgtl5000_1.lineOutLevel(29);
  sgtl5000_1.lineInLevel(5);
  sgtl5000_1.dacVolume(1.0); // No!
  sgtl5000_1.muteHeadphone();
  sgtl5000_1.inputSelect(AUDIO_INPUT_LINEIN);
  sgtl5000_1.audioPreProcessorEnable();
  sgtl5000_1.audioPostProcessorEnable();
  sgtl5000_1.surroundSoundEnable();
  sgtl5000_1.enhanceBassEnable();
  sgtl5000_1.dacVolumeRamp();

  // Set up mixers
  mainMix_LPT.gain(0,1); // Braids
  mainMix_RPT.gain(0,1);
  mainMix_LSG.gain(0,1); // Braids
  mainMix_RSG.gain(0,1);

  setupSynths();

  // init_sd_card();

  // Init device NervousSuperMother
  byte controls[7] = {0,1,2,3,4,5,6};
  device->init(controls);

  device->setHandleVolChange(onVolChange);

  // Init MIDI and set handlers
  MIDI.begin(MIDI_CHANNEL_OMNI);
  MIDI.turnThruOff();

  // Starting animation
  String starting_message = "! NervouSuperSynth !";
  for(int i=0; i<20; i++){
    lcd.setCursor(i,0);
    lcd.print(starting_message[i]);
    lcd.setCursor(i,1);
    lcd.print("=");
    if(i<19){
      lcd.setCursor(i+1,1);
      lcd.print(">");
    }
    delay(25);
  }
  delay(100);

  AudioInterrupts();
}

void loop() {
  MIDI.read();
  device->update();
}
