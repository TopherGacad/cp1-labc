#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/*
REASONING:
1. The first format specifier is for an int 
   and the second is for a double.

2. The first variable mentioned should be age because it is an int 'age',
   and the second must be for a double 'gpa'.

*/
