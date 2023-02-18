#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 * Description: Print The Status of n Value ---> Positive OR Negative
 * Return: Code 0 is translated as Success!
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Code*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
