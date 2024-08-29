#include <stdio.h>
#include <stdlib.h>

int* func()
{
    int* x = (int*)malloc(sizeof(int));

    printf("Address into function: %p\n", x);

    return x;
}

int main()
{
    int* pointerToFunc = func();

    printf("Address after using function: %p\n", pointerToFunc);
   
    return 0;
}