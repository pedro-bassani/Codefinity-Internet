#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int x = 100;
    
    int* pX = &x;
    
    printf("Address: %p || Address + 1: %p\n", pX, pX + 1);
    
    return 0;
}