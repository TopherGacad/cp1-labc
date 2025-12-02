#include <stdio.h>

int main() {

    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;

}

/**
REASONING:
    1. changed the format specifier from %d to %.3lf because the variable distance is a double
    I added .3 because there is 3 decimals after the period within the variable(distance) in
    order to output the exact and right amount
*/
