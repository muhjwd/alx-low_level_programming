#include "main.h"

/**
 * set_bit - a c file sets the value of a bit to 1 at given index
 *
 * @n: the number we want to set value to 1
 * @index: the index of the bit that we want
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = (*n | (1 << index));
		return (1);
	}
	return (-1);
}
