#include <stdio.h>

int main() {
    float distance = 12.345;
    printf("Distance: %.3f km\n", distance);
    return 0;
}

/**
REASONING:
i. since distance has decimals, the correct format specifier is %.3f for a float.
ii. %.3 ensures 3 decimal places are printed.
iii. can use double as well. data type double were alr correct but just wanted to chage it in float.
*/