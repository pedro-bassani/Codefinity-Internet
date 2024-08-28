#include <stdio.h>

int main()
{
    int x = 22543; // variable
    
    int* pX = &x; // `pX` is pointer to `x`

    printf("The value of `pX` is %p\n", pX); // value of pointer `pX`
    
    printf("The value of `x` by pointer `pX` is %d\n", *pX); // pointer dereference
    
    return 0;
}