#include <stdio.h>

int main()
{
	int info[] = {		4, -8,1,5,0,123,66,11,
						64,2,7,78,0,34,23,545,
						98,890,65,32,412,6,5465,
						87859,656534,324,324,456,
						356,341,5654, 534,756,12
				};

	int sizeOfArray = sizeof(info) / sizeof(int); // or sizeof(data) / sizeof(data[0]);

	printf("Elements in an array: %d\n", sizeOfArray);

	return 0;
}