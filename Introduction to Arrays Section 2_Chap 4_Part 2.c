#include <stdio.h>

int main() {
    
    int array [5] = {18, 19, 20, 21, 22};

    printf("%d\n", array[0]);
    printf("%d\n", array[2]);
    printf("%d\n", array[4]);

    array [2] = 5;
    
    printf("Now changing the valors, your new valor it is: \n");
    printf("%d\n", array[0]);
    printf("%d\n", array[2]);
    printf("%d\n", array[4]);
    
    return 0;
}
