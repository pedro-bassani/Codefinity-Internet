#include <stdio.h>

int main () {

    int userOption;
    int a;

    printf("Put any number between 1 - 3 (to select your soda): ");
    scanf("%d", &a);

    userOption = a;

    switch (userOption)
    {
    case 1:
        printf("You choosed Coca Cola Soda.\n");
        break;
    
    case 2:
        printf("You choosed Sprite Soda.\n");
        break;

    case 3:
        printf("You choosed Pepsi Soda.\n");
        break;

    default:
        printf("You don't choosed nothing yet!"); //used when you don't put any number already setted at the cases, for example 0 will go to the default option.
        break;
    }

    return 0;
}
