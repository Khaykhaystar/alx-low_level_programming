#include <stdio.h>

/**
 * main - Entry point
 * @Description: A code to print single digit numbers
 *
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(' ');

		}
				
	}
	return (0);
}

