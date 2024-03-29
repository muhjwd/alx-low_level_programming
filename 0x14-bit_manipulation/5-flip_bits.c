#include "main.h"

/**
 * flip_bits - a function returns the number of bits to flip to get from n to m
 *
 * @n: the first number value
 * @m: the second number value
 *
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		count += (diff & 1) ? 1 : 0;
		diff = diff >> 1;
	}
	return (count);
}
