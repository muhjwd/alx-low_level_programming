#include<stdio.h>

/**
 * main - Entry point
 * Description: Print digits using putchar 4 times
 * Return: Code 0 is translated as Success!
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		++digit;
	}
	putchar('\n');

	return (0);
}
