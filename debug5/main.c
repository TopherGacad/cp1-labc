#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:
1. double should not use %d as format specifier if it is not int
1. data type and format specifier should match

*/
