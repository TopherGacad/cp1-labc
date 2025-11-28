#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/*
REASONING:
1. Since the value of the variable has decimals,
float or double can be used.
2. The wrong format specifier is used, it must be %.3lf or %.3f
to limit the decimals to 3 places.

*/
