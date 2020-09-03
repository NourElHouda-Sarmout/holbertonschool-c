#include "holberton.h"
/**
 * print_last_digit - print the last digit
 * @i: integer
 *
 * Return: last digit of i
 */
int print_last_digit(int i)
{
	int last_digit = i % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
