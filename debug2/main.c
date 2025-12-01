#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
1. Variables in the printf statement is given in the wrong order, should be age fist then gpa.
2. %d expected an integr but instead received a double.

*/
