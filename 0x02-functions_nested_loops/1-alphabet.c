#include"main.h"

/**
 * main - Entry point
 * Description: 1-alphabet.c Task
 * Return: Code 0 is translated as Success!
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
