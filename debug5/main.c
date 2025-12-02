#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3f\n", distance);
    return 0;
}

/**
REASONING: the format specifier should be %.3f\n instead of %d km\n because distance is a double type and we want to display it with 3 decimal places

*/
