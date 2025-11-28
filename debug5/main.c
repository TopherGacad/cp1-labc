#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.2f km\n", distance); // use %f for double
    return 0;
}

/**
REASONING:
i. The variable distance is declared as a double, which stores floating-point numbers.
ii. The printf function uses the %.2f format specifier, which is appropriate for printing double values and rounds the output to 2 decimal places.
iii. This ensures that the value of distance is correctly interpreted and displayed, producing an accurate and readable output.
iv. Using %.2f instead of %d avoids type mismatches and prevents garbage values from being printed.
*/
