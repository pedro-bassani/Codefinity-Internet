#include <stdio.h>

int main() {

    int i;
    int n;

    printf("Number i:\tNumber n:\n");

    for(i = 1, n = 4; i <= 6; i++, n++) {

        printf("%d\t        %d\n", i, n); //that amount of space it's to define exactly the numbers n below the write 'Number n:'

    }

    return 0;
}
