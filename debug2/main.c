#include <stdio.h>

int main() {
    int age = 20;
    float gpa = 1.75;

    printf("Age: %d, GPA: %.2f\n", age, gpa);

    return 0;
}

/**
REASONING:
i. the order of variables in printf must match the format specifiers.
    a. %d must be an int, should be age
    b. %.2f must be a float, should be gpa
ii. can use double as well. data type were alr correct.
iii. format specifiers are correct for the respective variables.
*/