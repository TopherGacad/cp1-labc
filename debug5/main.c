#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:
The decimal number 12. 345 has a space, which is invalid, and the format specifier %d is used for a double variable. 
It should be written as 12.345 and printed using %lf (or %.3lf to control decimals) to display the value correctly.

*/
