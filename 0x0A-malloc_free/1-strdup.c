#include "holberton.h"
#include <stdlib.h>


/**
 * _strdup - function returns a pointer to a new string which is a duplicate
 * of the string @str.
 * @str: the size of the array
 *
 * Return: On success, a pointer to the duplicated string.
 * On error, NULL.
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplicate_str = malloc(sizeof(char) * (len + 1));

	if (duplicate_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate_str[i] = str[i];

	duplicate_str[len] = '\0';

	return (duplicate_str);

}
