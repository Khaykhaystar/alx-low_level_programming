#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char ch;
	char al = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
		while (al <= 'Z')
		{
			putchar(al);
		}
	putchar('\n');
	return (0);
}
