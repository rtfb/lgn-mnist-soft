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
