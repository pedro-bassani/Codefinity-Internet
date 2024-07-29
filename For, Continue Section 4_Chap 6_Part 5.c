#include <stdio.h>

int main() {

    int array[] = {-1, 10, -12,
                   18, -99, 40};
    
    printf("The positive elements are:\n");

    for(int i = 0; i < 6; i++) {

        if (array[i] < 0) {

            continue; //used to go out of the if, to try find an positive number instead a negative by the exemple
        }

        printf("%d\n", array[i]);
    }   

    return 0;
}
