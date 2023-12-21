#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int num;
	char val = 'a';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	while (val <= 'f')
	{
		putchar(val);
		val++;
	}

	putchar('\n');
	return (0);
}
