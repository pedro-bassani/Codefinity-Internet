#include <stdio.h>
#include <stdlib.h>

void ohm (double R) {
    
    R = R * 1000;
    
}

int main () {
    
    double r = 1.5;
    
    printf("The value before the resistance is %f\n", r);
    
    ohm(r);
    
    printf("The value after the resistance is %f\n", r);
    
    return 0;
}