#include "holberton.h"

/**
 *puts2 - prints every other character of a string
 *@str: a pointer the string we want to print
 *
 * Return: void
 */
void puts2(char *str)
{
	char *c;

	for (c = str; *c; c += 2)
		_putchar(*c);

	_putchar('\n');

}
