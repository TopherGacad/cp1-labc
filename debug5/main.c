#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:
       The reason the code was incorrect is because the printf format specifier didn’t match the
       type of the variable. since distance is a double, it must be printed using %lf, not %d which
       is only for integers. the value also contains decimals, so adding a precision like %.3lf
       makes the output properly show all three decimal places.
*/
