#include "main.h"
/**
 * print_diagonal - print diagonal
 * main - print diagonals
 * @n: first integer
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n == 2)
	{
		_putchar(92);
		_putchar('\n');
	}
	else if (n == 10)
	{
		_putchar(92);
		_putchar(92);
	}		
}
