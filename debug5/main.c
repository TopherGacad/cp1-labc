#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km \n", distance);
    return 0;
}

/**
REASONING:
The data type is correct but the format specifier is incorrect.
The format specifier should be %lf which is for the data type double.
The format specifier is %.3lf to show only 3 decimal.
*/
