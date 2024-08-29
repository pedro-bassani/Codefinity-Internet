#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {1,2,3,4,5};

    printf("Address of array: %p\n", array);

    for(int i = 0; i < 5; i++)
        printf("Value: %d | Address of element with index %d: %p\n", *(array + i), i , &array[i]);

    return 0;
}