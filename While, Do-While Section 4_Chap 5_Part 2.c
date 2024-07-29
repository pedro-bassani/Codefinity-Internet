#include <stdio.h>

int main () {

    int array[] = {1, 14, 3, 47,
                   5, 300, 12, 8};
    
    int i = 0;

    while(i < 8) {
        printf("Index of element: %d\tValue of element: %d\n", i, array[i]);
        
        i++;

    }

    return 0;
}
