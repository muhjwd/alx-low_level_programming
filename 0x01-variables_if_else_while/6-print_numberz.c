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
		/*Convert digit to ASCII representation*/
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');

	return (0);
}
