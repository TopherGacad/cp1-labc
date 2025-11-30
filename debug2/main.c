#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
1. The order of identifers/variable were not in order.
2. The order of identifiers/variable should match the order of format specifier.
3. %d should match age (int) and %.2lf should match gpa (double).
*/
