//Create an integer array of 5 elements and populate it.
//Retrieve the address of the third element.
//Increment the address of the third element (i.e., address + 1).
//Attempt to dereference the address obtained in the previous step.

#include <stdio.h>

int main()
{
    int array[5] = {1, 7, 12, 9, 19};

    printf("Value of third element %d\n", array[2]);

    printf("Address of third element %p\n", &(array[2])); 

    printf("(address-of-third-element) + 1: %d\n", *((&array[2]) + 1));

    return 0;
}