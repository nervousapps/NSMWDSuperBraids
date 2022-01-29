//************LIBRARIES USED**************

#include "synth_braids.h"
#include "CircularBuffer.h"

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
AudioConnection          BraidspatchCord66(envelopeBraids, 0, mixerBraids_L, 3);
AudioConnection          BraidspatchCord77(envelopeBraids, 0, mixerBraids_R, 3);
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
    "^_^_",
    "<><>",
    "FOLD",
    "1010",
    "SUB-",
    "SUB^",
    "SYN-",
    "SYN^",
    "x3x3",
    "__x3",
    "/\\x3",
    "SIx3",
    "RING",
    "\\\\CH",
    "\\_CH",
    "/\\CH",
    "SICH",
    "WTCH",
    "^^x6",
    "^_x6",
    "/\\x6",
    "SIx6",
    "WTx6",
    "*$*$",
    "+=+=",
    "TOY*",
    "ZLPF",
    "ZPKF",
    "ZBPF",
    "ZHPF",
    "VOSM",
    "VOWL",
    "VFOF",
    "HARM",
    " FM ",
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

int note_counter = 0;
CircularBuffer<String,20> buffer_line;
String line = "";
void displayBraids(){
  int i = 0;
  line = "";
  while(line.length() < 20 && i < buffer_line.size()){
    if(i == 0){
      line += buffer_line[i];
    }else{
      line += " " + buffer_line[i];
    }
    i++;
  }
  device->updateLine(2, line);
}

//Create midi note array...
// from https://gist.github.com/unohee/8f9b70d4ee336db3ebc624739960d161
String notes[200];
void makeArray(void) {
    int octave;//octave is 0 - 8;
    
    const String note_substring[12] = 
    {
    "C","C#","D","D#",
    "E","F","F#","G",
    "G#","A","A#","B"
    };
    
    for(int noteNum=0; noteNum<=108;noteNum++){
        octave = noteNum /12;
        notes[noteNum] = note_substring[noteNum%12]+String(octave);
    } 
}

// Handles note on events
void braidsOnNoteOn(byte channel, byte note, byte velocity){
    // If the velocity is larger than zero, means that is turning on
    if(velocity){
        int pitch = (note << 7) + fine_pitch;
        synthBraids.set_braids_pitch(pitch);
        bool result = buffer_line.unshift(notes[note]);
        if(not result){
          buffer_line.pop();
          buffer_line.unshift(notes[note]);
        }
        envelopeBraids.noteOn();
        displayBraids();
    }
}

// Handles note off events
void braidsOnNoteOff(byte channel, byte note, byte velocity){
  envelopeBraids.noteOff();
}

void braidsChangeShape(byte inputIndex, long value){
  shape = corresponding_shape[int(value)];
  synthBraids.set_braids_shape(int(shape));
  if(value == 0){
    device->updateLine(1, String(shape_values[57-1]) + "  ->" + String(shape_values[int(value)]) + "<-  " + String(shape_values[int(value)+1]));
  }else if (value > 55){
    device->updateLine(1, String(shape_values[int(value)-1]) + "  ->" + String(shape_values[int(value)]) + "<-  " + String(shape_values[0]));
  }else{
    device->updateLine(1, String(shape_values[int(value)-1]) + "  ->" + String(shape_values[int(value)]) + "<-  " + String(shape_values[int(value)+1]));
  }
}

bool connected = false;
void braidsChangeMux(byte inputIndex, unsigned int value, int diffToPrevious)
{
  Serial.print((value));
  Serial.print("\n");
  int mapped_value = value << 8;
  float f_mapped_value = 0;
  if(mapped_value>=0){
    switch(inputIndex){
      case SLIDE1:
      line = "COLOR";
      // AudioNoInterrupts();
      synthBraids.set_braids_color(mapped_value);
      // AudioInterrupts();
      break;

      case SLIDE2:
      line = "TIMBRE";
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
      line = "FINE PITCH";
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
        line = "ATTACK";
        envelopeBraids.attack(mapped_value);
      break;

      case SLIDE5:
        mapped_value = map(
          value,
          0,
          127,
          10.5,
          11880);
        line = "DECAY";
        envelopeBraids.decay(mapped_value);
      break;

      case SLIDE6:
        mapped_value = map(
          value,
          0,
          127,
          10.5,
          11880);
        line = "SUSTAIN";
        envelopeBraids.sustain(mapped_value);
      break;

      case SLIDE7:
        mapped_value = map(
          value,
          0,
          127,
          10.5,
          11880/2);
        line = "RELEASE";
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
        line = "ROOMSIZE";
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
        line = "DAMPING";
        freeverbsBraids.damping(f_mapped_value);
      break;

      case SLIDE10:
        mapped_value = map(
          value,
          0,
          127,
          0,
          10000);
        line = "CUTOFF";
        effectfilterBraids.frequency(mapped_value);
      break;

      case POT5:
        if(mapped_value == 0){
          AudioNoInterrupts();
          BraidspatchCord6.disconnect();
          BraidspatchCord7.disconnect();
          BraidspatchCord8.disconnect();
          BraidspatchCord9.disconnect();
          BraidspatchCord66.connect();
          BraidspatchCord77.connect();
          AudioInterrupts();
          connected = false;
          line = "FILTER OFF";
          break;
        }else if(not connected){
          AudioNoInterrupts();
          BraidspatchCord6.connect();
          BraidspatchCord7.connect();
          BraidspatchCord8.connect();
          BraidspatchCord9.connect();
          BraidspatchCord66.disconnect();
          BraidspatchCord77.disconnect();
          AudioInterrupts();
          connected = true;
        }
        mapped_value = map(
          value,
          0,
          127,
          7,
          50);
        f_mapped_value = mapped_value/10.0;
        line = "RESONNANCE";
        effectfilterBraids.resonance(f_mapped_value);
      break;
    }
    if(buffer_line[0] != line){
      bool result = buffer_line.unshift(line);
      if(not result){
        buffer_line.pop();
        buffer_line.unshift(line);
      }
    }
    displayBraids();
  }
}

void braidsOnCV(byte inputIndex, unsigned int value, int diffToPrevious) {
  int mapped_value = map(value,1024,0, 0, 127<<8);
  String line = "";
  switch(inputIndex){
    case 0:
    line = "ColorCV";
    // AudioNoInterrupts();
    synthBraids.set_braids_color(mapped_value);
    // AudioInterrupts();
    break;

    case 1:
    line = "TimbreCV";
    // AudioNoInterrupts();
    synthBraids.set_braids_timbre(mapped_value);
    // AudioInterrupts();
    break;

    case 2:
    mapped_value = map(
      value,
      1024,
      0,
      0,
      16383);
    line = "FinePitchCV";
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
    line = "PitchCV";
    // AudioInterrupts();
    break;
  }
  if(buffer_line[0] != line){
    bool result = buffer_line.unshift(line);
    if(not result){
      buffer_line.pop();
      buffer_line.unshift(line);
    }
  }
  displayBraids();
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
    line = "Reverb ON";
    BraidspatchCord4.connect();
    BraidspatchCord5.connect();
  }else {
    line = "Reverb OFF";
    BraidspatchCord4.disconnect();
    BraidspatchCord5.disconnect();
  }
  AudioInterrupts();
  if(buffer_line[0] != line){
    bool result = buffer_line.unshift(line);
    if(not result){
      buffer_line.pop();
      buffer_line.unshift(line);
    }
  }
  displayBraids();
}

void setFilterHLP(byte index, bool value){
  if(connected){
    AudioNoInterrupts();
    BraidspatchCord6.disconnect();
    BraidspatchCord7.disconnect();
    BraidspatchCord8.disconnect();
    BraidspatchCord9.disconnect();
    if(value){
      line = "Filter LP";
      BraidspatchCord6.connect();
      BraidspatchCord7.connect();
    }else {
      line = "Filter HP";
      BraidspatchCord8.connect();
      BraidspatchCord9.connect();
    }
    AudioInterrupts();
  }else{
    line = "FILTER OFF";
  }
  if(buffer_line[0] != line){
    bool result = buffer_line.unshift(line);
    if(not result){
      buffer_line.pop();
      buffer_line.unshift(line);
    }
  }
  displayBraids();
}

//************SETUP**************
FLASHMEM void setupAudioBraidsControls() {
  makeArray();

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

  BraidspatchCord6.connect();
  BraidspatchCord7.connect();
  BraidspatchCord66.disconnect();
  BraidspatchCord77.disconnect();

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
