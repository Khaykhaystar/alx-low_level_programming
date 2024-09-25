#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

		/*
		 * since 8 and 9 are the last numbers for each respective loops
		 * To remove the comma after the last number
		 **/
			if ((i == '8') && (j == '9'))
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			};
		}
	}
	return (0);
}

