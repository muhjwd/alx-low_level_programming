#include "main.h"

/**
 * 1-print_binary - a function to handle the print binary
 *
 * Prototype: void print_binary(unsigned long int n)
 * @n: the number to print in binary
 */

void print_binary_rec(unsigned long int n)
{
	if (n != 0)
	{
		print_binary_rec(n >> 1);
		_putchar((n & 1) ? '1' : '0');
	}
}

/**
 * print_binary - a function prints the binary representation of a number
 *
 * Prototype: void print_binary(unsigned long int n)
 * @n: the number to print in binary
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_rec(n);
}
