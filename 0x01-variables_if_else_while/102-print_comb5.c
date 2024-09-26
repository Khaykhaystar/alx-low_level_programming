#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

/**
 * bool checker(int c);
 */
int main(void)
{
	int i = 0;
	int l;


	for (i = 0; i < 100; i++)
	{
		for (l = 1; l < 100; l++)
		{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(l / 10 + '0');
				putchar(l % 10 + '0');
				if ((i == 98) && (l == 99))
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}

		}
	}
	return (0);
}


/**
 * bool checker(int c)
*{
*	if (c <= 9)
*	{
*		return true;
*	}
*	else
*	{
*		return false;
*	}
*/

