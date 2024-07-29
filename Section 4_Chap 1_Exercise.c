#include <stdio.h>

int main() {

	int birthday;

    printf("Put what is the date you do your birthday (just put the day, excluding the month and year): ");
    scanf("%d\n", birthday);

    if(birthday != 18) {
        printf("Your birthday doesn't match");

    } else if (birthday == 18) {
        printf("Congratulations, your anniversary it is at the same day as the creator of this code!!!!!");

    } else if (birthday == 0) {
        printf("What???? Did you already born?");

    }

	return 0;
}