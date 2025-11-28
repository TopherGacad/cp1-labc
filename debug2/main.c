#include <stdio.h>

int main() {
    int age = 20;
    float gpa = 1.75;

    printf("Age: %d, GPA: %.2f\n", age, gpa);

    return 0;
}

/**
REASONING:
1. the data type used in gpa is wrong it should be float 
2. the format specifier should be %.2f because the data type is float
3. the arrangement of variable is wrong, it should be age before gpa

*/
