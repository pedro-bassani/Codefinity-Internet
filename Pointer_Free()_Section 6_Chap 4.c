#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int* pX = (int*)(malloc)(sizeof(int));
    
    *pX = 10;
    
    printf("Value %d at address %p\n", *pX, pX);
    
    free(pX); //Commum used to free the allocated space in pointer
    
    printf("After 'free()' value %d at address %p\n", *pX, pX);
    
    return 0;
}