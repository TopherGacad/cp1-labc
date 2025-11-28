#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}


/**
REASONING:
i. %d is used for integers (int)
ii. %.2lf is used for doubles with 2 decimal places (double)
iii. Arguments in printf() must match the format specifiers IN ORDER
*/
