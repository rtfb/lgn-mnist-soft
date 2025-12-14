#include <stddef.h>
#include <stdint.h>

#include "consts.h"

int decode_output(char *output_layer) {
    int max_sum = 0;
    int inferred_class = 0;
    for (int class = 0; class < NUM_CLASSES; class++) {
        int sum = 0;
        for (int i = 0; i < BITS_PER_CLASS; i++) {
            sum += output_layer[class*BITS_PER_CLASS+i];
        }
        if (sum > max_sum) {
            max_sum = sum;
            inferred_class = class;
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

void decode_one_8b(uint8_t input, uint8_t *counters, size_t ncounters) {
    uint32_t lower_nibble = input & 0xf;
    uint32_t upper_nibble = (input >> 4) & 0xf;
    uint32_t *counter32 = (uint32_t *)counters;
    *counter32 += lut[lower_nibble];
    counter32++;
    *counter32 += lut[upper_nibble];
}

void decode_one_16b(uint16_t input, uint8_t *counters, size_t ncounters) {
    uint32_t nibble1 = input & 0xf;
    uint32_t nibble2 = (input >> 4) & 0xf;
    uint32_t nibble3 = (input >> 8) & 0xf;
    uint32_t nibble4 = (input >> 12) & 0xf;
    uint32_t *counter32 = (uint32_t *)counters;
    *counter32 += lut[nibble1];
    counter32++;
    *counter32 += lut[nibble2];
    counter32++;
    *counter32 += lut[nibble3];
    counter32++;
    *counter32 += lut[nibble4];
}

void decode_one_32b(uint32_t input, uint8_t *counters, size_t ncounters) {
    uint32_t nibble1 = input & 0xf;
    uint32_t nibble2 = (input >> 4) & 0xf;
    uint32_t nibble3 = (input >> 8) & 0xf;
    uint32_t nibble4 = (input >> 12) & 0xf;
    uint32_t nibble5 = (input >> 16) & 0xf;
    uint32_t nibble6 = (input >> 20) & 0xf;
    uint32_t nibble7 = (input >> 24) & 0xf;
    uint32_t nibble8 = (input >> 28) & 0xf;
    uint32_t *counter32 = (uint32_t *)counters;
    *counter32 += lut[nibble1];
    counter32++;
    *counter32 += lut[nibble2];
    counter32++;
    *counter32 += lut[nibble3];
    counter32++;
    *counter32 += lut[nibble4];
    counter32++;
    *counter32 += lut[nibble5];
    counter32++;
    *counter32 += lut[nibble6];
    counter32++;
    *counter32 += lut[nibble7];
    counter32++;
    *counter32 += lut[nibble8];
}

void decode_one_64b(uint64_t input, uint8_t *counters, size_t ncounters) {
    uint32_t nibble1 = input & 0xf;
    uint32_t nibble2 = (input >> 4) & 0xf;
    uint32_t nibble3 = (input >> 8) & 0xf;
    uint32_t nibble4 = (input >> 12) & 0xf;
    uint32_t nibble5 = (input >> 16) & 0xf;
    uint32_t nibble6 = (input >> 20) & 0xf;
    uint32_t nibble7 = (input >> 24) & 0xf;
    uint32_t nibble8 = (input >> 28) & 0xf;

    uint32_t nibble9 = (input >> 32) & 0xf;
    uint32_t nibblea = (input >> 36) & 0xf;
    uint32_t nibbleb = (input >> 40) & 0xf;
    uint32_t nibblec = (input >> 44) & 0xf;
    uint32_t nibbled = (input >> 48) & 0xf;
    uint32_t nibblee = (input >> 52) & 0xf;
    uint32_t nibblef = (input >> 56) & 0xf;
    uint32_t nibbleg = (input >> 60) & 0xf;

    uint32_t *counter32 = (uint32_t *)counters;
    *counter32 += lut[nibble1];
    counter32++;
    *counter32 += lut[nibble2];
    counter32++;
    *counter32 += lut[nibble3];
    counter32++;
    *counter32 += lut[nibble4];
    counter32++;
    *counter32 += lut[nibble5];
    counter32++;
    *counter32 += lut[nibble6];
    counter32++;
    *counter32 += lut[nibble7];
    counter32++;
    *counter32 += lut[nibble8];

    counter32++;
    *counter32 += lut[nibble9];
    counter32++;
    *counter32 += lut[nibblea];
    counter32++;
    *counter32 += lut[nibbleb];
    counter32++;
    *counter32 += lut[nibblec];
    counter32++;
    *counter32 += lut[nibbled];
    counter32++;
    *counter32 += lut[nibblee];
    counter32++;
    *counter32 += lut[nibblef];
    counter32++;
    *counter32 += lut[nibbleg];
}

#define DECODE(suffix, elem_type, n)                                          \
void decode_output_##suffix(elem_type *output_layer, uint8_t *classes_out) {  \
    int max_sum[n] = {0};                                                     \
    for (int class = 0; class < NUM_CLASSES; class++) {                       \
        uint8_t counters[n] = {0};                                            \
        for (int i = 0; i < BITS_PER_CLASS; i++) {                            \
            decode_one_##suffix(output_layer[class*BITS_PER_CLASS+i],         \
                                counters, n);                                 \
        }                                                                     \
        for (int i = 0; i < n; i++) {                                         \
            if (counters[i] > max_sum[i]) {                                   \
                max_sum[i] = counters[i];                                     \
                classes_out[i] = class;                                       \
            }                                                                 \
        }                                                                     \
    }                                                                         \
}

DECODE(8b, uint8_t, 8)
DECODE(16b, uint16_t, 16)
DECODE(32b, uint32_t, 32)
DECODE(64b, uint64_t, 64)
