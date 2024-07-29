#include <stdio.h>

int main() {

    int array[] = {12, 37, 40, 18, 10,
                   14, 67, 99, 30, 208};
    
    for(int i = 0; i < 10; i++) {

        printf("Index of element: %d\t Value of element: %d\n", i, array[i]);

    }

    return 0;
}
