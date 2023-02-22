#include"main.h"

/**
 * main - Entry point
 * Description: print_alphabet_x10.c Task
 * Return: Code 0 is translated as Success!
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; ++line)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
