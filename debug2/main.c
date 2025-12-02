#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
1. The code is invalid because the order of format specifiers in the printf function 
does not match the order of the variables provided. The format specifier for GPA (%.2lf) 
should come after the format specifier for age (%d).  

*/
