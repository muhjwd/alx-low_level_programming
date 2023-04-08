#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 *
 * @n: the number we want to get index of
 * @index: the index of the bit that we want
 *
 * Return: the value of the bit at the index or -1 in case an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > 63) ? -1 : (n & (1 << index)) ? 1 : 0);
}
