#include "holberton.h"
/**
 * print_last_digit - print the last digit
 * @i: integer
 *
 * Return: last digit of i
 */
int print_last_digit(int i)
{

	int ld;


	if (i < 0)
		i = -i;
	ld = i % 10;

	_putchar(ld + '0');
	return (ld);
}
