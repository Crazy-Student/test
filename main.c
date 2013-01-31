#include <stdio.h>

void main(void)
{
	int type = 0;
	int result = 0;
	float input = 0, output = 0;
	printf("Select trasformation type:\n1\tC->F\n2\tF->C\ntype: ");
	result = scanf("%d", &type);
	if (result != 1)
	{
		printf("Unable to read digit. Goodbye!");
		return;
	}
	if (type > 2 || type < 1)
	{
		printf("Incorrect transformation type. Goodbye!");
		return;
	}
	printf("Temperature in %c: ", type == 1 ? "C" : "F");
	result = scanf("%f", &input);
	if (result != 1)
	{
		printf("Incorrect temperature. Goodbye!");
		return;
	}
	switch (type)
	{
	case 1: 
		output = 32 + ((input * 9) / 5);
		break;
	case 2: 
		output = (input - 32) * 5 / 9;
		break;
	}
	printf("Temperature in %c: %f\d", type == 1 ? "F" : "C", output);
	
}
