#include <stdio.h>

int main()
{
    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/**
REASONING:
%d is the fornat specifier for int types
use %.3lf to format double to 3 decimal places

*/
