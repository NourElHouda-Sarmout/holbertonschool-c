#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the array we want to reallocates its size
 * @old_size: integer represents the old size of @ptr.
 * @new_size: integer represents the new size of @ptr.
 *
 * Return: On success, Return a pointer to the array with new size.
 *          On error, NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *newPtr;
	char *arr1;
	char *arr2;

	if (new_size == old_size)
		return (ptr);

	if (ptr == 0)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
			return (NULL);

		return (newPtr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	arr2 = ptr;
	newPtr = malloc(sizeof(*arr2) * new_size);

	if (newPtr == NULL)
	{
		free(newPtr);
		return (NULL);
	}
	arr1 = newPtr;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		arr1[i] = *arr2[i]++;
	}

	free(ptr);
	return (newPtr);
}
