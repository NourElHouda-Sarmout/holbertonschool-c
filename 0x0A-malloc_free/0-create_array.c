#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - creates an array of chars, and initializes it with
 *a specific char.
 * @size: the size of the array
 * @c: The character to print
 *
 * Return: On success, pointer to the array.
 * On error, NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
		return (NULL);

	t = malloc(sizeof(char) * size);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		t[i] = c;

	free(t);

	return (t);

}
