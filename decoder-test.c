#include <stdint.h>
#include <stdio.h>

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

int main() {
    uint8_t i1, i2, i3, i4, i5;
    // prevent optimizer from removing everything
    scanf("%hhx %hhx %hhx %hhx %hhx", &i1, &i2, &i3, &i4, &i5);
    // uint8_t input = 0xf;
    uint8_t counters[8] = {0};
    // decoder_test(input, counters, 8);
    // decoder_test(input, counters, 8);
    // decoder_test(1, counters, 8);
    // decoder_test(3, counters, 8);
    // decoder_test(0x40, counters, 8);
    decoder_test(i1, counters, 8);
    decoder_test(i2, counters, 8);
    decoder_test(i3, counters, 8);
    decoder_test(i4, counters, 8);
    decoder_test(i5, counters, 8);
    for (int i = 0; i < 8; i++) {
        printf("Counter %d: %d\n", i, counters[i]);
    }
    return 0;
}
