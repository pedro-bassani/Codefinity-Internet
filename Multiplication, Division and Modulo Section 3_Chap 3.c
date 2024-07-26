#include <stdio.h>

int main () {

    float height;
    float weight;

    printf("Put your height (incluse the two numbers before the comma): ");
    scanf("%f", &height);
    printf("Put the same to the weight:");
    scanf("%f", &weight);
    printf("Your height is: %.2f Cm\n", height);
    printf("Your weight is: %.2f Kg", weight);

    return 0;
}
