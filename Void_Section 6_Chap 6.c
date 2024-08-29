#include <stdio.h>
#include <stdlib.h>

//we can't dereference a void* pointer.

int main()
{
    char c = 'F';
    int i = 100;
    double d = 3.15;

    void* pX;

    pX = &c;
    printf("%c \n", *((char*)pX));

    pX = &i;
    printf("%d \n", *((int*)pX));

    pX = &d;
    printf("%.2f \n", *((double*)pX));

    return 0;
}