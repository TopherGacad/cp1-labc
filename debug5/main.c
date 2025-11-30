#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3f km\n", distance);
    return 0;
}

/**
REASONING:
- `%d` is for integers; `distance` is a `double`. 
Use `%f` to print floating-point values.
*/
