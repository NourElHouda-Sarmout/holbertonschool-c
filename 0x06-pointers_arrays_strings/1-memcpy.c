/**
 * _memcpy - copies memory area.
 * @dest: destination pointer.
 * @src: source pointer.
 * @n: The number of bytes to copy from src.
 *
 * Return: A pointer to the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
