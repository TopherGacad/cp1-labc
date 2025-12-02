#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %lf km\n", distance);
    return 0;
}

/**
REASONING:
The code is invalid because the format specifier used in the printf function does not match 
the data type of the variable distance. The variable distance is declared as a double, so the correct format specifier
 to use is %lf
*/
