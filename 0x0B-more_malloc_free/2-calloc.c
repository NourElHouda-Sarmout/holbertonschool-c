#include "holberton.h"
#include <stdlib.h>


/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of each elements
 *
 * Return: On success, Return a pointer to the concatenated string.
 *          On error, NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
