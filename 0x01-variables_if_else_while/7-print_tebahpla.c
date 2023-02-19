#include<stdio.h>

/**
 * main - Entry point
 * Description: Print a-z
 * Return: Code 0 is translated as Success!
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
