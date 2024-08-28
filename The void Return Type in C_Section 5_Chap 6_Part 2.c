#include <stdio.h>

int factorial(int n) {

    if (n == 0 || n == 1) //that`s a condition to demonstrate that factorial 0! or 1! = 1

        return 1;

    else
        return n * factorial(n - 1);

}

int main () {


    int n = 3;
    
    printf("The result of factorial will be %d\n", factorial(n));

    return 0;

}