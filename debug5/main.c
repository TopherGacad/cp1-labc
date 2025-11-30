#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:
1. The format specifier %d is used to print int.
2. We should use %lf to print double.
3. We can put .3 between % and lf to specify how many number to print after the decimal.
*/
