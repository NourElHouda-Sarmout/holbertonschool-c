#include "holberton.h"

/**
 * _strlen_recursion - calculatethe length of a string
 *@s: a pointer to the char
 *
 * Return: int the length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 +  _strlen_recursion(s + 1));

}
