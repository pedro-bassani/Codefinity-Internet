#include <stdio.h>

//using Ternary Operator in C

int main() {

    int a = 3;
    int b = 2;
    int c;

    c = (a > b)? a : b; //is equal as a IF ELSE but with a diff format

    printf("The result is: %d", c);

    return 0;
}

/*int main() {

    int a = 3;
    int b = 2;
    int c;

    if(a > b) {
        c = a;

    } else if (b > a) {
        c = b;

    } else if (a == b) {
        c = a + b;
    }

    return 0;
}*/
