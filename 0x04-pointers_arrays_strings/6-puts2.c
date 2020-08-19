#include "holberton.h"

/**
 *puts2- prints every other character of a string
 *@str: a pointer the string we want to print
 *Return: void
 */
void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
