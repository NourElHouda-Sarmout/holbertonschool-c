#include "holberton.h"

/**
 *isNumericChar - test if is numeric
 *@x: a char to test
 *
 * Return: boolean
 */
boolean isNumericChar(char x)
{
	return ((x >= '0' && x <= '9') ? true : false);
}

/**
 *_atoi - test if is numeric
 *@s: a char to test
 *
 * Return: int
 */
int _atoi(char *s)
{
	if (*s == '\0')
		return (0);

	int res = 0;

	int sign = 1;

	int i = 0;

	if (s[0] == '-')

{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; ++i)
	{
		if (isNumericChar(str[i]) == false)
			return (0);

		res = res * 10 + str[i] - '0';
	}

	return (sign * res);
}
