#include <stdio.h>

/**
 * main - Entry point
 * Description: Print Alphabet 2
 * Return: Code 0 is translated as Success!
*/


int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');

	return (0);
}
