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
	int *arr1;
	int *arr2;

	if (new_size == old_size)
		return (ptr);

	if (new_size <= old_size)
		return (ptr);

	if (ptr == 0)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newPtr = malloc(new_size);

	if (newPtr == NULL)
		return (NULL);

	arr1 = newPtr;
	arr2 = ptr;

	for (i = 0; i < old_size ; i++)
	{
		arr1[i] = arr2[i];
	}


	return (newPtr);
}
