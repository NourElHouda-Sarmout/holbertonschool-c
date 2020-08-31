#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min element.
 * @max: max element.
 *
 * Return: On success, Return a pointer to the arranged integer array.
 *          On error, NULL.
 */
int *array_range(int min, int max)
{
        int i, length = 0;
	int *arranged_array;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;

	arranged_array = malloc(sizeof(int) * length);

	if (arranged_array == NULL)
		return (NULL);


	for (i = min; i <= max; i++)
		arranged_array[i] = i;

	return (arranged_array);
}
