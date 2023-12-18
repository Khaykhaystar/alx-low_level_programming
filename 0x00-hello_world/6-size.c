#include <stdio.h>

/**
 * main - A program to print size of a data type
 *
 * Return: Always 0
 */

int main(void)
{
	printf("%lu\n" sizeof(char));
	printf("%lu\n" sizeof(int));
	printf("%lu\n" sizeof(float));
	printf("%lu\n" sizeof(long int));
	printf("%lu\n" sizeof(long long int));

	return (0);
}
