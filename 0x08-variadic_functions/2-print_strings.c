#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings and separators between them.
 * @separator: string to be printed between the strings
 * @n: The number of arguments.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int x;
	char *str;

	va_start(arguments, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(arguments, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (x != n - 1 && separator != '\0')
			printf("%s", separator);
	}

	printf("\n");

	va_end(arguments);
}
