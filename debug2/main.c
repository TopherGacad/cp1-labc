#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/* 
REASONING:
%d was trying to print gpa 
%.2lf was trying to print age 

*/
