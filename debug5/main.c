#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:

    The format specifier used in the printf function is incorrect.
    Since 'distance' is a double, the correct format specifier should 
    be %.3lf to display it properly.

*/
