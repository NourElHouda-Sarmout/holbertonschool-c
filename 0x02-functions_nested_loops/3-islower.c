/**
 * _islower - test if the character given is in lowercase or not
 * @c: The character to test
 *
 * Return: 1 (is lowercase)
 * 0 otherwise
 */
int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
