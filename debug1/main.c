#include <stdio.h>

int main() {
    char name[]  = "Juan";
    printf("Name: %s\n", name);
    return 0;
}

/**
REASONING: C doesn’t have a “string” type like some other languages. 
To store text, we use an array of characters, which is what char[] does. 


*/
