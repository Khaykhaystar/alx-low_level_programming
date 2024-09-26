#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

bool checker(int c);

int main(void)
{
	int i = 0;
	int l;


	for (i = 0; i < 100; i++)
	{
		for (l = 1; l < 100; l++)
		{
			if (checker(i) == true) {
				putchar(i/10 + '0');
				putchar(i%10 + '0');
			}
		       	else 
			{
				putchar(i/10 + '0');
				putchar(i%10 + '0');
			}

			if (checker(l) == true)
			{
				putchar(l/10 + '0');
				putchar(l%10 + '0'); 
			} else 
			
			{
				putchar(l/10 + '0');
				putchar(l%10 + '0');
			}

		}
	}
	return 0;
}


bool checker(int c)
{
	if (c <= 9)
	{
		return true;
	}
	else
	{
		return false;
	}
}

