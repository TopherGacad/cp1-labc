#include <stdio.h>

int main() {
    double pi = 3.14159;
    printf("Pi is approximately: %.2f\n", pi);
    return 0;
}

/**
REASONING:
    1. Pi should not be in int data type if it has decimal
    2. You can use float or double
    3. Format specifier should match type and be precision in decimal %.2f


*/
