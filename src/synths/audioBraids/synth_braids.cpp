#include <Arduino.h>
#include "synth_braids.h"
#include "utility/dspinst.h"

void AudioSynthBraids::update(void)
{
	audio_block_t *block;
	uint8_t sync_buffer[AUDIO_BLOCK_SAMPLES];
	memset(sync_buffer, 0, sizeof(sync_buffer));
	block = allocate();
	if (block == NULL){
		// osc.Strike();
		return;
	}
	if(pre_pitch!=pitch){
		osc.set_pitch(pitch);
		pre_pitch = pitch;
	}
	if(pre_timbre != timbre || pre_color != color){
		osc.set_parameters(timbre,color);
	}
	osc.Render(sync_buffer, block->data, AUDIO_BLOCK_SAMPLES);
	transmit(block, 0);
	release(block);
	return;
}
