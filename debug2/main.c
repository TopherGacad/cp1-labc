#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.25;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
The issue is the wrong order of format specifiers and variables in printf. 
The solution is to match them correctly: %d for age and %.2f for gpa.

*/
