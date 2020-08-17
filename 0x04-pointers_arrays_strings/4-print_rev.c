#include "holberton.h"

/**
 *print_rev - prints a string. in reverse
 *@s: a pointer the string we want to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int j , length;

	length = string_length(s);

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');

}

/**
 *string_length - determine the length of a string
 *@s: a pointer the string we want to know its length
 *
 * Return: int (length of a string)
 */
int string_length(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;

	return (c);
}
