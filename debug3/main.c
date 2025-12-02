#include <stdio.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

/**
REASONING:

stdlib.h is not necessary for that simple Hello world program because
it only uses printf, which is declared in stdio.h and does not call any stdlib.h functions

*/
