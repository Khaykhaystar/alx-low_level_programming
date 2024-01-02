#include "main.h"
#include <stdio.h>


/**
 * print_alphabet - print alphabet in lower case
 *
 * Return: Always 0(Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
_putchar('\n');
}


