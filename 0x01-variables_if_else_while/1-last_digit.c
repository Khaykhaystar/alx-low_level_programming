#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int n;
	int d;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (d > 5)
	{
		printf("Last digit of "%ul" is "%d" and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("Last digit of "%ul" is "%d" and is 0\n", n, d);
	}
	else if (d < 6 && d != 0)
	{
		printf("Last digit of "%ul" is "%d" and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
