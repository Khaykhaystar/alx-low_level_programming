#include <stdio.h>

/**
 * main - Entry point
 * @Description: A code to print single digit numbers
 *
 */

int main(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
}
