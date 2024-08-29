#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pX = NULL; // pointer to `int` type (4 bites)

    for (int i = 0; i < 8; i++)
        printf("Address: %p\n", pX + i);

    return 0;
}