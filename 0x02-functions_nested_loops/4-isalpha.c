#include "main.h"

/**
 * _isalpha - function to check for alphabet
 * @c: determine if c is an alphabet
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
