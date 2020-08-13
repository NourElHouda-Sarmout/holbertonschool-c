/**
 * _isalpha - test if the character given is an alphabet
 * @c: The character to test
 *
 * Return: 1 (is alphabet lowercase or uppercase)
 * 0 otherwise
 */
int _isalpha(int c)
{
	if  ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
