#ifndef SYNTH_BRAIDS_H_
#define SYNTH_BRAIDS_H_

#include "AudioStream.h"
#include "macro_oscillator.h"


using namespace braids;

class AudioSynthBraids: public AudioStream
{
public:
  AudioSynthBraids(): AudioStream(0, NULL) { init_braids(); }
  ~AudioSynthBraids() { }

  void set_braids_shape(int16_t shape) {
    // Trims the shape to the valid values
    shape = shape >= MACRO_OSC_SHAPE_LAST_ACCESSIBLE_FROM_META ? MACRO_OSC_SHAPE_LAST_ACCESSIBLE_FROM_META : shape<0 ? 0 : shape;

    // Sets the shape
    MacroOscillatorShape osc_shape = static_cast<MacroOscillatorShape>(shape);
    osc.set_shape(osc_shape);
  }

  void set_braids_color(int16_t colorbraids) {
    color = colorbraids;
  }

  void set_braids_timbre(int16_t timbrebraids) {
    timbre = timbrebraids;
  }

  void set_braids_pitch(int16_t pitchbraids) {
    pitch = pitchbraids;
  }

  int16_t get_braids_color() {
    return color;
  }

  int16_t get_braids_timbre() {
    return timbre;
  }

  int16_t get_braids_pitch() {
    return pitch;
  }

  inline void init_braids(){
    // Global used to trigger the next buffer to render
    // wait = 0;

    // Initializes the objects
    osc.Init();
    pitch = 32 << 7;
    osc.set_pitch(pitch);
    osc.Strike();
  }

  virtual void update(void);

private:
  MacroOscillator osc;

  // Globals that define the parameters of the oscillator
  volatile int16_t timbre = 0;
  volatile int16_t color = 0;
  volatile int16_t pre_timbre = 0;
  volatile int16_t pre_color = 0;
  volatile int16_t pitch,pre_pitch;
  volatile int16_t shapebraids = 0;
};

#endif
