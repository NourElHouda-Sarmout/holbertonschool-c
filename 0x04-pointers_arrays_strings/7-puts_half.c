#include "holberton.h"

/**
 *puts_half - prints half of a string
 *@str: a pointer the string we want to print its half
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length, i, c;

	length = string_length(str);


	if (length % 2 == 0)
		c = length / 2;
	else
		c = (length - 1) / 2;

	for (i = c ; i < length ; i++)
		_putchar(str[i]);

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
