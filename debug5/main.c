#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:
format specifier for double type should be %lf or %.2lf instead of %d.
*/
