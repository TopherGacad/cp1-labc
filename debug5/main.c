#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:
    1.Wrong format specifier. (Declared variable was double, used decimal)
    2.Added ".3" to set its decimal count after the "." only to 3 as only the first 3 decimals were needed.
*/
