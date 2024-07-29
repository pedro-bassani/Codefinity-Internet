#include <stdio.h>

//more recommendable to use with a program who will made part with more people coding in there isntead the Ternary Operator way.

int main() { //the another way of ternary operator with a easy use

    int a = 3;
    int b = 2;
    int c;

    if(a > b) {
        c = a;
        printf("The result is: %d", c);

    } else if (b > a) {
        c = b;
        printf("The result is: %d", c);

    } else if (a == b) {
        c = a + b;
        printf("The result is: %d", c);

    }

    return 0;
}
