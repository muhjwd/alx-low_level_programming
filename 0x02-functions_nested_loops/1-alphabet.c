#include"main.h"

/**
 * main - Entry point
 * Description: 1-alphabet.c Task
 * print_alphabet - utilizes on the _putchar function to print
*/

// Main Function print_alphabet (void to return nothing)
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
