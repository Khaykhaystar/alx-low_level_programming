#include "main.h"

/**
 * _islower - print the lower value
 * @c: return 1 if c is lower
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
