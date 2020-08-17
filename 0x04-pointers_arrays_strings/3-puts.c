#include "holberton.h"

/**
 *_puts - prints a string
 *@str: a pointer the string we want to print
 *
 * Return: void
 */
void _puts(char *str)
{
	char *c;

	for (c = str; *c; ++c)
	{
		_putchar(*c);
	}

	_putchar('\n');

}
