#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
1. The gpa and age variables are declared in printf in not the correct order. So;
2. The gpa and age should be in a row just like the output format required.

*/
