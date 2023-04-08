#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 *
 * @n: the number we want to set value to 0
 * @index: the index of the bit that we want
 *
 * Returns: 1 if worked, or -1 if there is an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = (*n & ~(1 << index));

		return (1);
	}
	return (-1);
}
