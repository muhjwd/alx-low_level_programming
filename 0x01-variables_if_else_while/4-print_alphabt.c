#include<stdio.h>

/**
 * main - Entry point
 * Description: Print Alphabet 3
 * Return: Code 0 is translated as Success!
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
