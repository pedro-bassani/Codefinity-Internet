#include <stdio.h>

#include <stdio.h> 


double degreesToRadians(double degree) // *double degree* is argument
{
	double rads = (degree * 3.14) / 180;

	return rads; // output of function
}

int main()
{
	double degree = 30;

	printf("30 degrees equals %.2f radians\n", degreesToRadians(degree));

	return 0;
}