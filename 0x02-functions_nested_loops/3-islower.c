#include"main.h"

/**
 * main - Entry point
 * Description: islower.c Task
 * Return: Code 0 is translated as Success!
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
