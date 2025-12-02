#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:
The format specifier is wrong. %d is for integers, but distance is a double, so it should use %lf to print the correct value.
and added .3 because the first 3 decimal were needed.
*/
