#include<stdio.h>

/**
 * main - Entry point
 * Description: Print digits using putchar
 * Return: Code 0 is translated as Success!
*/

int main(void)
{
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102) /*102; decimal rep of f*/
	{
		putchar(digit);

		/* After 9 jump till 96; `*/
		if (digit == 57)
			digit += 39;
		++digit;
	}
	putchar('\n');

	return (0);
}
