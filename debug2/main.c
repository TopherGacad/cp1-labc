#include <stdio.h>

int main() {
    int age = 18;
    double gpa = 1.25;
    printf("Age: %d, GPA: %.2lf\n", age, gpa);
    return 0;
}

/*
    Reasoning:
   1. The int has no declared value
   2. The value of double and return statement has a missing semi-colon
   3. Although %f works for the data type double, I think it is better 
   to practice using theexact format specifier to avoid confusion in the long run.
*/

