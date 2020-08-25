#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers and separators between the numbers.
 * @separator: string to be printed between the numbers
 * @n: The number of arguments.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int x;

	va_start(arguments, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(arguments, int));
		if (x != n - 1)
		{
			if (separator != '\0')
			printf("%s", separator);

		}
	}

	printf("%c\n", '\n');

	va_end(arguments);
}
