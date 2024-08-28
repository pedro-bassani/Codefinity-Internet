#include <stdio.h>

int findMaxElement(int arr[]) // 1
{
    int max = arr[0]; // 2

    for (int i = 1; i < 5; i++) // 3
    {
        if (arr[i] > max) // 3
        {
            max = arr[i]; // 4
        }
    }

    return max;
}

int main() 
{
    int array[] = { 10, 5, 7, 14, 3 };

    int maxElement = findMaxElement(array);

    printf("Max element is: %d\n", maxElement);

    return 0;
}