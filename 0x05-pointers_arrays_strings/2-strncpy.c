/**
 * _strncpy - copy given n characters from source C-string to another string
 * @dest: destination string
 * @src: source string
 * @n: n bytes from src
 *
 * Return: pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (n > 0)
		dest[n - 1] = '\0';

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';



	return (dest);
}
