#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:
1. you can also use the 'float' but it is up to the user.
2. the format specifier must be '%lf' for 'double' because '%d' is for 'int'.
3. use '.(number)' to cut the remaining numbers.
*/
