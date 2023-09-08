#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this assign a random number to the variable
 *
 * Return: 0 when successful
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastdigit);

	}
	else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is equal to 0", n, lastdigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
	}
	return (0);
}
