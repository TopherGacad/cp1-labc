#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3f km\n", distance);
    return 0;
}

/**
REASONING:
    1. the format specifier does not match
    the data type
    2. when using double or float, both data type uses
    the format specifier %f
*/
