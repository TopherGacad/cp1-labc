#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
    1. the order of the variables on the line 7
    has it wrong which was gpa, age
    2. the variables should match the format
    specifiers

*/
