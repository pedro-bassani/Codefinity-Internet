#include <stdio.h>
#include <stdlib.h>

int main () {

    int* pX = (int*)malloc(sizeof(int));

    *pX = 100;

    printf("The %d at adress %p\n", *pX, pX);

    return 0;
}