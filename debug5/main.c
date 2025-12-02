#include <stdio.h>

int main() {
    float distance = 12.345;
    printf("Distance:  %.3fkm\n", distance);
    return 0;
}

/**
REASONING:
a. Since the distance does not require high precision, float can be used as variable.
b. Using %d is incorrect because that is used to print integers . The correct format
specifier should be %.3fkm to print distance as it requires to display 3 decimal places.
*/
