#include"main.h"

/**
 * main - Entry point
 * Description: isalpha.c Task
 * Return: Code 0 is translated as Success!
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 &&
	    c >= 65 && c >= 90)
		return (1);
	return (0);
}

