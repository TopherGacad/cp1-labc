#include <stdio.h>

int main() {
    
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
 1. calling the variable at the end of the print statement should follow the order
 of the used format specifier
 2. since %d was first used, we should call the age variable as it is an integer
 3. the second one used was a double, so the gpa should be called in the second time

*/
