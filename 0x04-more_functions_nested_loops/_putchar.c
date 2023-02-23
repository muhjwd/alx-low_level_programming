#include <unistd.h>

/**
 * Description: A C program that prints putchar
 * Return: 0---> Success & -1 Error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
