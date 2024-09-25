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
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
			
		//since 8 and 9 are the last numbers for each respective loops
		//To remove the comma after the last number
				if ((i == '7') && (j == '8') && (k == '9'))
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
	}	
		
	
	return (0);
}

