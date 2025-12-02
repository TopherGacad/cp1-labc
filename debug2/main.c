#include <stdio.h>

int main() {
    int age = 20;
    float gpa = 1.75;

    printf("Age: %d, GPA: %.2f\n", age, gpa);

    return 0;
}

/**
REASONING:
a. The variable for gpa can also be float than double since we only need 2 decimal places and not full
precision.
b. In GPA format specifier , it should be %.2f\n so that we can declare the right 2 decimal places.
*/
