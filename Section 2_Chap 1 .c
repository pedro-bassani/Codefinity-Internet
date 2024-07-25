#include <stdio.h>

int main () {

    int num; //usually use %d to say a info about "int"
    float dec; // usually use %f to say a info about "float"
    char letter; //usually use %c to say a info about "char"

    printf("Write whole numbers: ");
    scanf("%d", &num);
    printf("That is your number: %d\n", num);

    printf("Write a number with comma: ");
    scanf("%f", &dec);
    printf("That is your number with comma: %.2f \n", dec);

    printf("Write a random letter: ");
    scanf(" %c", &letter);
    printf("Your letter is: %c \n", letter);

    return 0;
}