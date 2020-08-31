#include "holberton.h"
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings @s1 and n bytes from @s2.
 * @s1: the first string.
 * @s2: the second string
 * @n: n bytes from @s2.
 *
 * Return: On success, Return a pointer to the concatenated string.
 *          On error, NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenate_str;
	unsigned int i, j, len_s1 = 0, len_s2 = n;

	if (s1 == NULL)
		s1 = "";


	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len_s1++;


	concatenate_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (concatenate_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concatenate_str[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < len_s2; j++)
		concatenate_str[i + j] = s2[j];

	concatenate_str[i + j] = '\0';

	return (concatenate_str);
}
