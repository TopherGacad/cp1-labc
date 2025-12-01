#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3f km\n", distance);
    return 0;
}

/**
REASONING:
i. The format specifier used in the original program is %d, that format specifier is for int only.
ii. Use %f or %.3f instead of %d.

*/
