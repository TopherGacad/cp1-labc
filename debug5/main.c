#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %lf km\n", distance);
    printf("Distance: %.2lf km\n", distance);
    return 0;
}

/**
REASONING:
1. Changed %d into %lf
2. Added another printf ("Distance: %.2lf km\n", distance);
*/
