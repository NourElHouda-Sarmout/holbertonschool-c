/**
 * _strcmp - Compares pointers to two strings
 * @s1: A pointer to the first string to compare.
 * @s2: A pointer to the second string to compare.
 *
 *Return: If s1<str2,the negative difference of the first unmatched characters.
 *         If s1 == s2, 0.
 *         If s1>s2,the positive difference of the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	int res;

	while (*s1)
	{
		if (*s1 != *s2)
			break;

		s1++;
		s2++;
	}

	res = *(unsigned char *)s1 - *(unsigned char *)s2;
	return (res);
}
