#include <stdio.h>

int main() {
    printf("Hello world!\n");
    return 0;
}

/**
REASONING:
`stdlib.h` is not needed here (no functions from stdlib are used), so the minimal correct code uses only `stdio.h`.
*/
