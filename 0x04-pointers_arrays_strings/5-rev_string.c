#include "holberton.h"
/**
 *rev_string - reverses a string
 *@s: a pointer the string we want to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = string_length(s);

	begin = s;
	end = s;

	for (c = 0 ; c < (length - 1) ; c++)
		end++;

	for (c = 0 ; c < length / 2 ; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
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
