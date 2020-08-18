/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @Ch: string
 *
 * Return: void
 */
char *string_toupper(char *Ch)
{
	int c = 0;

	while (*(Ch + c) != '\0')
	{

		if (Ch[c] >= 97 && Ch[c] <= 122)
		{
			Ch[c] = Ch[c] - 32;
		}

		c++;
	}
	return (Ch);
}
