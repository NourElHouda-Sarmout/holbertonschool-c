#include "holberton.h"

/**
 *factorial - calculate the factorial
 *@n: a pointer to the integer
 *
 * Return: int the factorial of @n
 */
int factorial(int n)
{
	if (n <= 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
