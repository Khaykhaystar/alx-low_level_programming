#include "main.h"

/**
 * print_line - print a straight line for values greater than 0
 * main - print line using _putchar
 * @n: first integer
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				_putchar('_');
			}
			_putchar('\n');
		}
}
