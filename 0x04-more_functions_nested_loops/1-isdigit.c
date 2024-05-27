#include "main.h"
/**
 * main - determine if numeral is a digit
 * @c: return 1 if c is a digit
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

