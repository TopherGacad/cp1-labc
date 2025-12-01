#include <stdio.h>

int main() {
    float distance = 12.345;
    printf("Distance: %.3f km\n", distance);
    return 0;
}

/**
REASONING:
Double can also be used, but it will be better to use float instead
in order to save memory since the decimal digit was only below 8 (<=7).

The format specifier should be %.3f specifically since printf prints 6 digits of the decimal value by default.
*/
