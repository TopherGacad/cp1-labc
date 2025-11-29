#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.2lf km\n", distance);
    return 0;
}

/**
REASONING:
1. %d is for integers so that we should replce it for %.2lf for double values.
2. The variable is set to double so i put %.2lf and the 12.345 value will be
printed with 2 decimal places because its specified in the formaat and its already 
rounded off. 
*/
