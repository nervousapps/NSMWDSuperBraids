
// Routes for outputs
// AudioBraids -> mainMix_xSY -> 0

#include "synths/audioBraids/AudioSynthBraids.h"

AudioConnection          synthsPatchCord0(ampBraids_L, 0, mainMix_RPT, 0);
AudioConnection          synthsPatchCord1(ampBraids_R, 0, mainMix_LPT, 0);
AudioConnection          synthsPatchCord2(ampBraids_L, 0, mainMix_RSG, 0);
AudioConnection          synthsPatchCord3(ampBraids_R, 0, mainMix_LSG, 0);

FLASHMEM void setupSynths(){
  setupAudioBraids();
}