#include <stdio.h>

extern int do_inference(char *inp);

int main() {
    #include "inputs.c"

    for (int i = 0; i < 600; i++) {
        char *inp = raw_inputs[i];
        int inferred_class = do_inference(inp);
        printf("Input %d: inferred class: %d\n", i, inferred_class);
    }
    return 0;
}
