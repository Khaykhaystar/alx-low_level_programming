#include "main.h"
/**
 * print_most_numbers - exclude 2 and 4
 * main - to print certain numbers
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2')
		{
			continue;
		}
		else if (i == '4')
		{
			continue;
		}	
	_putchar(i);
	}
	_putchar('\n');
}
