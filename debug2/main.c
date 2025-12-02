#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
%d expects an int (so it must get age first)
and %.2lf prints a double with 2 decimal places (so it must get gpa second)

*/
