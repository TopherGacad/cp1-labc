#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %f km\n", distance);
    return 0;
}

/**
REASONING:
    1. Format specifier used was wrong, %d is for int data type
    2. Data type  for double and float the format specifier used is %f
    3. Since double is the data type %f should be the format specifier

*/
