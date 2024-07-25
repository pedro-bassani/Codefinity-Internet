#include <stdio.h>

int main() {
    
    int array [3][3] = { //Line//Column
                            {1, 2, 3}, //index 0
                            {4, 5, 6}, //index 1
                            {7, 8, 9} //index 2
    };
    printf("Your choose was: %d", array[1][2]);
    
    return 0;
}
