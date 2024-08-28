#include <stdio.h>
#include <stdlib.h> //The fun malloc() is alocatted inside this fun.

int main () {
int* pX = (int*)malloc(sizeof(int));

printf("The adress alocatted in memory is %p\n", pX);

return 0;

}