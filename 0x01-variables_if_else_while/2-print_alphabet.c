#include <stdio.h>

/**
 * main - Entry point
 * Description: Print Alphabet
 * Return: Code 0 is translated as Success!
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
