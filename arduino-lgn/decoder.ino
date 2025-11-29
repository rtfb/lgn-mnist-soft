#include <stddef.h>
#include <stdint.h>

#include "consts.h"

int decode_output(char *output_layer) {
    int max_sum = 0;
    int inferred_class = 0;
    for (int iclass = 0; iclass < NUM_CLASSES; iclass++) {
        int sum = 0;
        for (int i = 0; i < BITS_PER_CLASS; i++) {
            sum += output_layer[iclass*BITS_PER_CLASS+i];
        }
        if (sum > max_sum) {
            max_sum = sum;
            inferred_class = iclass;
        }
    }
    return inferred_class;
}

uint32_t lut[16] = {
    0x00000000u,
    0x00000001u,
    0x00000100u,
    0x00000101u,
    0x00010000u,
    0x00010001u,
    0x00010100u,
    0x00010101u,
    0x01000000u,
    0x01000001u,
    0x01000100u,
    0x01000101u,
    0x01010000u,
    0x01010001u,
    0x01010100u,
    0x01010101u,
};

void decoder_test(uint8_t input, uint8_t *counters, size_t ncounters) {
    uint32_t lower_nibble = input & 0xf;
    uint32_t upper_nibble = (input >> 4) & 0xf;
    uint32_t *counter32 = (uint32_t *)counters;
    *counter32 += lut[lower_nibble];
    counter32++;
    *counter32 += lut[upper_nibble];
}

void decode_output_8b(char *output_layer, char *classes_out) {
    int max_sum[8] = {0};
    for (int iclass = 0; iclass < NUM_CLASSES; iclass++) {
        uint8_t counters[8] = {0};
        for (int i = 0; i < BITS_PER_CLASS; i++) {
            decoder_test(output_layer[iclass*BITS_PER_CLASS+i], counters, 8);
        }
        for (int i = 0; i < 8; i++) {
            if (counters[i] > max_sum[i]) {
                max_sum[i] = counters[i];
                classes_out[i] = iclass;
            }
        }
    }
}
