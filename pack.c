#include <stdint.h>

#include "consts.h"

#define PACK(suffix, elem_type, num_inputs)                                 \
void pack##suffix(uint8_t inp[NUM_INPUTS][256], int out_width,              \
                  elem_type out[num_inputs][256]) {                         \
    int input_base = 0;                                                     \
    for (int out_img = 0; out_img < num_inputs; out_img++) {                \
        for (int image = 0; image < out_width; image++) {                   \
            for (int i = 0; i < 256; i++) {                                 \
                elem_type val = out[out_img][i];                            \
                elem_type bit = (inp[input_base+image][i] & 0x1) << image;  \
                val |= bit;                                                 \
                out[out_img][i] = val;                                      \
            }                                                               \
        }                                                                   \
        input_base += out_width;                                            \
    }                                                                       \
}

PACK(8, uint8_t, NUM_8B_INPUTS)
PACK(16, uint16_t, NUM_16B_INPUTS)
