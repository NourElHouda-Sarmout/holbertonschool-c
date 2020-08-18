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

	char *ptr = dest;


	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);

}
