#include<stdio.h>

/**
 * main - Entry point
 * Description: Print digits
 * Return: Code 0 is translated as Success!
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");

	return (0);
}
