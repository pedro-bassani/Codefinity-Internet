// it's func.h file
#include <stdio.h>

double R, C;

double chrg_dchrg(double R, double C);

// it's func.c file

//#include "func.h"

double chrg_dchrg(double R, double C)
{
    double theta = 5 *((R * C) / 1000);
    return theta;
}

// it's main.c file

//#include "func.h"

int main()
{
    R = 10;
    C = 150;

    printf("Charge/discharge will be %.2f ms\n", chrg_dchrg(R,C));

    return 0;
}

//The result will be 7.50 ms

//So, what exactly is a function prototype?

//A function prototype in C is a declaration that specifies the function's name, 
//return type, and parameters, without providing the actual implementation of the function.
