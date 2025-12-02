#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
        The original code had the variables in the wrong order inside printf, which caused the wrong values to appear in the output.
        The format specifiers must match the variables in the exact sequence they are printed,
        so %d should correspond to age and %.2lf should correspond to gpa.

*/
