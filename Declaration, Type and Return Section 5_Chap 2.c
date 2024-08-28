#include <stdio.h>

double math (){

    double number = 8.56;
    double number2 = 9.58;
    double result = number + number2;

    return result;
}

int main () {

    double result = math();
    printf("The result is: %f\n", result);

    return 0;
}