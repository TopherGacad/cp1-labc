#include <stdio.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

/**
REASONING:
i. The program includes <stdlib.h>, but it does not use any function from that library.
ii. The only function used is printf(), which belongs to <stdio.h>. Therefore, <stdlib.h>
iii. is unnecessary and should be removed to avoid redundant code.

*/
