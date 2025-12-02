#include <stdio.h>

int main()
{
    float distance = 12.345;
    printf("Distance: %.3f km\n", distance);
    return 0;
}

/**
REASONING:
            1. Can use double or float, but in this case float is fine because double is for 15-16 Decimal digits.

            2. Use %f for floating points, and lf for doubles. earlier it was %d


*/
