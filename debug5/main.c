#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:
1. Format is incorrect
2. You need to set the decimal to three places using .3 since only three decimal places are needed
*/
