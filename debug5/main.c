#include <stdio.h>

int main() {
    float distance = 12.345;
    printf("Distance: %.3f km\n", distance);
    return 0;
}

/**
REASONING:
    1. Data type should be "float", because there are only 3 decimals. As I have mentioned, 
    double is only applied to variables with higher decimals

    2. Format specifier should be "%.3f" and not "%d", specifying the amount of decimals
    which is 3.
*/
