#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf \n", age, gpa);

    return 0;
}

/**
REASONING:
The values of printf printf statement do not match the specifier.
It should be the variable "age" first before "gpa" so it match the format 
specifiers.
*/
