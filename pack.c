#include <stdint.h>

#include "consts.h"

void pack(uint8_t inp[NUM_INPUTS][256], int out_width, uint8_t out[NUM_8B_INPUTS][256]) {
    int input_base = 0;
    for (int out_img = 0; out_img < NUM_8B_INPUTS; out_img++) {
        for (int image = 0; image < out_width; image++) {
            for (int i = 0; i < 256; i++) {
                uint8_t val = out[out_img][i];
                uint8_t bit = (inp[input_base+image][i] & 0x1) << image;
                val |= bit;
                out[out_img][i] = val;
            }
        }
        input_base += out_width;
    }
}
