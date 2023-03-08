#include "main.h"

/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 *
 * @n : input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 *
 * Return: square root of @n or -1
*/

int _sqrt_check(int n, int sqrt);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 *
 * @n: input number
 *
 * Return: square root
*/

int _sqrt_check(int n, int sqrt)
{
	if (sqrt > n)
		return (-1);
	if (sqrt * sqrt == n)
		return (sqrt);
	return (_sqrt_check(n, sqrt + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the natural square root
 *
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_check(n, 0));
}