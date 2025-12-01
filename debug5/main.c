#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:
The format specifier %d is used for a double variable. 
It should be printed using %lf (or %.3lf to control decimals) to display the value correctly.

*/
