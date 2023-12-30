#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void);

#endif
