#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:
1. The %d format specifier is for integers, so it cannot be used to print a double. 
2. To correctly print a floating-point value, a format specifier like %.3lf must be used.
*/
