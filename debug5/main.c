#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3f km\n", distance);

    return 0;
}

/**
REASONING:

You used the wrong format specifier (%d for integers)
even though distance is a double and must use %f.
*/

