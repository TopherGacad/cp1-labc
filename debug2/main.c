#include <stdio.h>

int main() {
    int age = 20;
    float gpa = 1.75;

    printf("Age: %d, GPA: %.2f\n", age, gpa);

    return 0;
}

/**
REASONING:
    1. "float" should be used instead of "double", although they both can be used for numbers with decimals.
    Float is more applicable to numbers with decimals lower than 6-7, double is higher.
    
    2. Instead of "%.21f" the format specifier should be "%.2f" since the data type is float and only has 2 decimals.

    3. In line 7 or printf argument, age should come first before gpa. Since age is stated first in the printf statement.

*/
