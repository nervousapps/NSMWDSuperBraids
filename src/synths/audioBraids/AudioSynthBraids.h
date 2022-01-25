//************LIBRARIES USED**************

#include "synth_braids.h"

AudioSynthBraids         synthBraids;
AudioEffectEnvelope      envelopeBraids;
AudioFilterStateVariable effectfilterBraids;
AudioEffectFreeverbStereo freeverbsBraids;
AudioMixer4              mixerBraids_L;
AudioMixer4              mixerBraids_R;
AudioAmplifier           ampBraids_L;
AudioAmplifier           ampBraids_R;
AudioConnection          BraidspatchCord1(synthBraids, 0, envelopeBraids, 0);
AudioConnection          BraidspatchCord2(envelopeBraids, 0, effectfilterBraids, 0);
AudioConnection          BraidspatchCord3(envelopeBraids, 0, freeverbsBraids, 0);
AudioConnection          BraidspatchCord4(freeverbsBraids, 0, mixerBraids_L, 0);
AudioConnection          BraidspatchCord5(freeverbsBraids, 1, mixerBraids_R, 0);
AudioConnection          BraidspatchCord6(effectfilterBraids, 0, mixerBraids_L, 1);
AudioConnection          BraidspatchCord7(effectfilterBraids, 0, mixerBraids_R, 1);
AudioConnection          BraidspatchCord8(effectfilterBraids, 2, mixerBraids_L, 2);
AudioConnection          BraidspatchCord9(effectfilterBraids, 2, mixerBraids_R, 2);
AudioConnection          BraidspatchCord10(mixerBraids_L, 0, ampBraids_L, 0);
AudioConnection          BraidspatchCord11(mixerBraids_R, 0, ampBraids_R, 0);

int color = 0;
int timbre = 0;
int shape = 0;
int fine_pitch = 0;

const int corresponding_shape[] = {
  0,
1,
2,
3,
4,
5,
6,
7,
8,
9,
10,
11,
12,
13,
14,
15,
16,
17,
18,
19,
20,
21,
22,
23,
24,
25,
26,
27,
28,
29,
30,
31,
32,
33,
34,
35,
36,
37,
38,
39,
40,
41,
42,
43,
44,
45,
46,
47,
48,
49,
50,
51,
52,
53,
54,
55,
56,
};

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
        // device->updateLine(2, line);
        envelopeBraids.noteOn();
    }
}

// Handles note off events
void braidsOnNoteOff(byte channel, byte note, byte velocity){
  envelopeBraids.noteOff();
}

void braidsChangeShape(byte inputIndex, long value){
  shape = corresponding_shape[int(value)];
  synthBraids.set_braids_shape(int(shape));
  device->updateLine(1, String(int(value)) +" : " + String(shape_values[int(value)]));
}

void braidsChangeMux(byte inputIndex, unsigned int value, int diffToPrevious)
{
  Serial.print((value));
  Serial.print("\n");
  int mapped_value = value << 8;
  float f_mapped_value = 0;
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
      mapped_value = map(
          value,
          0,
          127,
          0,
          16383);
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

      case SLIDE8:
        mapped_value = map(
          value,
          0,
          127,
          0,
          10);
        f_mapped_value = mapped_value/10.0;
        device->updateLine(2, "Roomsize : " + String(f_mapped_value));
        freeverbsBraids.roomsize(f_mapped_value);
      break;

      case POT4:
        mapped_value = map(
          value,
          0,
          127,
          0,
          11);
        f_mapped_value = mapped_value/10.0;
        device->updateLine(2, "Damping : " + String(f_mapped_value));
        freeverbsBraids.damping(f_mapped_value);
      break;

      case SLIDE10:
        mapped_value = map(
          value,
          0,
          127,
          0,
          10000);
        device->updateLine(2, "Cutoff : " + String(mapped_value));
        effectfilterBraids.frequency(mapped_value);
      break;

      case POT5:
        mapped_value = map(
          value,
          0,
          127,
          7,
          50);
        f_mapped_value = mapped_value/10.0;
        device->updateLine(2, "Res : " + String(f_mapped_value));
        effectfilterBraids.resonance(f_mapped_value);
      break;
    }
  }
}

void braidsOnCV(byte inputIndex, unsigned int value, int diffToPrevious) {
  int mapped_value = map(value,1024,0, 0, 127<<8);
  String line = "";
  switch(inputIndex){
    case 0:
    mapped_value = (synthBraids.get_braids_color() + mapped_value)/2;
    line = "ColorCV : " + String(mapped_value);
    // AudioNoInterrupts();
    synthBraids.set_braids_color(mapped_value);
    // AudioInterrupts();
    break;

    case 1:
    line = "TimbreCV : " + String(mapped_value);
    // AudioNoInterrupts();
    synthBraids.set_braids_timbre((synthBraids.get_braids_timbre() + mapped_value)/2);
    // AudioInterrupts();
    break;

    case 2:
    mapped_value = map(
      value,
      1024,
      0,
      0,
      16383);
    line = "FinePitchCV : " + String(mapped_value);
    // AudioNoInterrupts();
    fine_pitch = mapped_value;
    // AudioInterrupts();
    break;

    case 3:
    // AudioNoInterrupts();
    mapped_value = map(
      value,
      1024,
      0,
      0,
      16383);
    int note = mapped_value + fine_pitch;
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

void enableReverb(byte index, bool value){
  AudioNoInterrupts();
  if(value){
    device->updateLine(2, "Reverb ON");
    BraidspatchCord4.connect();
    BraidspatchCord5.connect();
  }else {
    device->updateLine(2, "Reverb OFF");
    BraidspatchCord4.disconnect();
    BraidspatchCord5.disconnect();
  }
  AudioInterrupts();
}

void setFilterHLP(byte index, bool value){
  AudioNoInterrupts();
  BraidspatchCord6.disconnect();
  BraidspatchCord7.disconnect();
  BraidspatchCord8.disconnect();
  BraidspatchCord9.disconnect();
  if(value){
    device->updateLine(2, "Filter LP");
    BraidspatchCord6.connect();
    BraidspatchCord7.connect();
  }else {
    device->updateLine(2, "Filter HP");
    BraidspatchCord8.connect();
    BraidspatchCord9.connect();
  }
  AudioInterrupts();
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
  device->setHandleMuxControlChange(SLIDE8, braidsChangeMux);
  device->setHandleMuxControlChange(POT4, braidsChangeMux);
  device->setHandleMuxControlChange(SLIDE10, braidsChangeMux);
  device->setHandleMuxControlChange(POT5, braidsChangeMux);

  device->setHandleSwitchChange(1, enableReverb);
  device->setHandleSwitchChange(2, setFilterHLP);

  device->setHandleEncoderChange(0, braidsChangeShape);
  device->updateEncodeursMaxValue(0, 57-1);
  device->updateEncodeursValue(0, 0);
}

FLASHMEM void setupAudioBraids() {
  AudioNoInterrupts();
  BraidspatchCord10.connect();
  BraidspatchCord11.connect();

  // Set up controls
  setupAudioBraidsControls();

  // init the audio object AudioSynthBraids
  synthBraids.init_braids();
  synthBraids.set_braids_shape(MACRO_OSC_SHAPE_CSAW);

  MIDI.setHandleNoteOn(braidsOnNoteOn);
  MIDI.setHandleNoteOff(braidsOnNoteOff);

  // freeverbsBraids.roomsize(0.0);
  // freeverbsBraids.damping(0.0);

  ampBraids_L.gain(0.5);
  ampBraids_R.gain(0.5);

  AudioInterrupts();

  envelopeBraids.noteOn();
}

FLASHMEM void stopAudioBraids(){
  AudioNoInterrupts();
  BraidspatchCord10.disconnect();
  BraidspatchCord11.disconnect();
  AudioInterrupts();
}
