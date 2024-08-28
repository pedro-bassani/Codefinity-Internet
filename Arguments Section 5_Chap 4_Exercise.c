//Make a function that define the tiny element of an array.

#include <stdio.h>

int findMinElement(int arr[]) 
{
    int min = arr[0]; 

    for (int i = 1; i < 5; i++) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
    }

    return min;
}

int main() 
{
    int array[] = { 5, 1, 3, -6, 100 };

    int minElement = findMinElement(array);

    printf("Min element is: %d\n", minElement);

    return 0;
}