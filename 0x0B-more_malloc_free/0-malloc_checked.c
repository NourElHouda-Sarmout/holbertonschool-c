#include "holberton.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size of memory must be allocated.
 *
 * Return: On success, Return a pointer to the allocated memory.
 *          On error, NULL.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
		return (NULL);
	}

	return (ptr);
}
