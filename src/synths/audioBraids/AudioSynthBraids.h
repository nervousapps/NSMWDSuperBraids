//************LIBRARIES USED**************

#include "synth_braids.h"

AudioSynthBraids         synthBraids;
AudioEffectEnvelope      envelopeBraids;
AudioAmplifier           ampBraids_L;
AudioAmplifier           ampBraids_R;
AudioConnection          BraidspatchCord1(synthBraids, 0, envelopeBraids, 0);
AudioConnection          BraidspatchCord2(envelopeBraids, 0, ampBraids_L, 0);
AudioConnection          BraidspatchCord3(envelopeBraids, 0, ampBraids_R, 0);

int color = 0;
int timbre = 0;
int shape = 0;
int fine_pitch = 0;

const char* const shape_values[] PROGMEM = {
    "CSAW",
    "^\x88\x8D_",
    "\x88\x8A\x8C\x8D",
    "FOLD",
    "\x8E\x8E\x8E\x8E",
    "SUB\x8C",
    "SUB\x88",
    "SYN\x8C",
    "SYN\x88",
    "\x88\x88x3",
    "\x8C_x3",
    "/\\x3",
    "SIx3",
    "RING",
    "\x88\x88" "CH",
    "\x8C_CH",
    "/\\CH",
    "SICH",
    "WTCH",
    "\x88\x88x6",
    "\x8C_x6",
    "/\\x6",
    "SIx6",
    "WTx6",
    "\x88\x89\x88\x89",
    "\x88\x88\x8E\x8E",
    "TOY*",
    "ZLPF",
    "ZPKF",
    "ZBPF",
    "ZHPF",
    "VOSM",
    "VOWL",
    "VFOF",
    "HARM",
    "FM  ",
    "FBFM",
    "WTFM",
    "PLUK",
    "BOWD",
    "BLOW",
    "FLUT",
    "BELL",
    "DRUM",
    "KICK",
    "CYMB",
    "SNAR",
    "WTBL",
    "WMAP",
    "WLIN",
#if NUM_BANKS >= 1
    "SAM1",
#endif
#if NUM_BANKS >= 2
    "SAM2",
#endif
#if NUM_BANKS >= 3
    "SAM3",
#endif
#if NUM_BANKS >= 4
    "SAM4",
#endif
    "NOIS",
    "TWNQ",
    "CLKN",
    "CLOU",
    "PRTC",    // "NAME" // For your algorithm
};


// Handles note on events
void braidsOnNoteOn(byte channel, byte note, byte velocity){
    // If the velocity is larger than zero, means that is turning on
    if(velocity){
        int pitch = (note << 7) + fine_pitch;
        synthBraids.set_braids_pitch(pitch);
        String line = "PitchMidi : " + String(pitch);
        device->updateLine(2, line);
        envelopeBraids.noteOn();
    }
}

// Handles note off events
void braidsOnNoteOff(byte channel, byte note, byte velocity){
  envelopeBraids.noteOff();
}

void braidsChangeShape(byte inputIndex, long value){
  if(value > 12 || value < 9){
  shape = value;
  synthBraids.set_braids_shape(int(shape));
  device->updateLine(1, String(int(shape)) +" : " + String(shape_values[int(shape)]));
  }
  else {
    device->updateLine(1, String(int(value)) +" : " + String(shape_values[int(value)]) + " NOT USABLE :(");
  }
}

void braidsChangeMux(byte inputIndex, unsigned int value, int diffToPrevious)
{
  Serial.print((value));
  Serial.print("\n");
  int mapped_value = value << 7;
  if(mapped_value>0){
    switch(inputIndex){
      case SLIDE1:
      device->updateLine(2, "C:" + String(mapped_value));
      // AudioNoInterrupts();
      synthBraids.set_braids_color(mapped_value);
      // AudioInterrupts();
      break;

      case SLIDE2:
      device->updateLine(2, "T:" + String(mapped_value));
      // AudioNoInterrupts();
      synthBraids.set_braids_timbre(mapped_value);
      // AudioInterrupts();
      break;

      case SLIDE3:
      device->updateLine(2, "P:" + String(mapped_value));
      // AudioNoInterrupts();
      fine_pitch = mapped_value;
      // AudioInterrupts();
      break;

      case SLIDE4:
        mapped_value = map(
          value,
          0,
          127,
          10.5,
          20);
        device->updateLine(2, "Attack : " + String(mapped_value));
        envelopeBraids.attack(mapped_value);
      break;

      case SLIDE5:
        mapped_value = map(
          value,
          0,
          127,
          10.5,
          11880);
        device->updateLine(2, "Decay : " + String(mapped_value));
        envelopeBraids.decay(mapped_value);
      break;

      case SLIDE6:
        mapped_value = map(
          value,
          0,
          127,
          10.5,
          11880);
        device->updateLine(2, "Sustain : " + String(mapped_value));
        envelopeBraids.sustain(mapped_value);
      break;

      case SLIDE7:
        mapped_value = map(
          value,
          0,
          127,
          10.5,
          11880/2);
        device->updateLine(2, "Release : " + String(mapped_value));
        envelopeBraids.release(mapped_value);
      break;
    }
  }
}

void braidsOnCV(byte inputIndex, unsigned int value, int diffToPrevious) {
  int pitch = map(value,1024,0, 0, 127<<7);
  String line = "";
  switch(inputIndex){
    case 0:
    line = "ColorCV : " + String(pitch);
    // AudioNoInterrupts();
    synthBraids.set_braids_color((synthBraids.color + pitch)/2);
    // AudioInterrupts();
    break;

    case 1:
    line = "TimbreCV : " + String(pitch);
    // AudioNoInterrupts();
    synthBraids.set_braids_timbre((synthBraids.timbre + pitch)/2);
    // AudioInterrupts();
    break;

    case 2:
    line = "FinePitchCV : " + String(pitch);
    // AudioNoInterrupts();
    fine_pitch = pitch;
    // AudioInterrupts();
    break;

    case 3:
    // AudioNoInterrupts();
    int note = pitch + fine_pitch;
    synthBraids.set_braids_pitch(note);
    line = "PitchCV : " + String(note);
    // AudioInterrupts();
    break;

  }
  device->updateLine(2, line);
}

void braidsOnTrigger(byte inputIndex) {
  envelopeBraids.noteOn();
}

void braidsOffTrigger(byte inputIndex) {
  envelopeBraids.noteOff();
}

//************SETUP**************
FLASHMEM void setupAudioBraidsControls() {
  for(byte i =0; i<4; i++){
    device->setHandleCVChange(i, braidsOnCV);
  }
  device->setHandleFallingTrigger(0, braidsOnTrigger);
  device->setHandleRisingTrigger(0, braidsOffTrigger);
  device->setHandleMuxControlChange(SLIDE1, braidsChangeMux);
  device->setHandleMuxControlChange(SLIDE2, braidsChangeMux);
  device->setHandleMuxControlChange(SLIDE3, braidsChangeMux);
  device->setHandleMuxControlChange(SLIDE4, braidsChangeMux);
  device->setHandleMuxControlChange(SLIDE5, braidsChangeMux);
  device->setHandleMuxControlChange(SLIDE6, braidsChangeMux);
  device->setHandleMuxControlChange(SLIDE7, braidsChangeMux);
  device->setHandleEncoderChange(0, braidsChangeShape);
  device->updateEncodeursMaxValue(0, 56-1);
  device->updateEncodeursValue(0, 0);
}

FLASHMEM void setupAudioBraids() {
  AudioNoInterrupts();
  BraidspatchCord2.connect();
  BraidspatchCord3.connect();

  // Set up controls
  setupAudioBraidsControls();

  // init the audio object AudioSynthBraids
  synthBraids.init_braids();
  synthBraids.set_braids_shape(MACRO_OSC_SHAPE_CSAW);

  MIDI.setHandleNoteOn(braidsOnNoteOn);
  MIDI.setHandleNoteOff(braidsOnNoteOff);

  ampBraids_L.gain(0.5);
  ampBraids_R.gain(0.5);

  AudioInterrupts();

  envelopeBraids.noteOn();
}

FLASHMEM void stopAudioBraids(){
  AudioNoInterrupts();
  BraidspatchCord2.disconnect();
  BraidspatchCord3.disconnect();
  AudioInterrupts();
}
