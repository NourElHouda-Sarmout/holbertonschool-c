/**
 *_memset - fills memory with a constant byte.
 * @s: A pointer to char
 * @b: char b
 * @n: number of bytes
 *
 * Return: A pointer to the filled memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
