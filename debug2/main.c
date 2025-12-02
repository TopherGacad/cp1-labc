#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:

    The specifiers used in the printf function are not in order.
    The correct order should be %d for age (integer) and %.2lf for gpa (double).

*/
