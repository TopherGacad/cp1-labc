#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
The variables use the correct data types, but the order in printf is wrong. %d should match age and %.2lf should match gpa.

*/
