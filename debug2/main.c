#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2f\n", age, gpa);

    return 0;
}

/**
REASONING:
    1. Age and gpa were switch that's why there's an error
    2. Age and GPA should be switched to be in the correct order.
    3. The order of the format specifiers should match the order of the variables

*/
