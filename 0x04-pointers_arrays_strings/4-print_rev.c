#include "holberton.h"

/**
 *print_rev - prints a string. in reverse
 *@s: a pointer the string we want to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
