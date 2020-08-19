/**
 * infinite_add - adds two numbers from string
 * @n1: pointer to char
 * @n2: pointer to char
 * @r: pointer to char
 * @size_r: int
 *
 * Return: sum of two integers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int num = 0;
	char *p = r;
	int i = 0;
	int j = 0;
	int carry = 0;
	long int length = 0;
	long int rsiz = size_r;

	for (; *(n1 + 1); i++)
	{
		n1++;
	}
	for (; *(n2 + 1); j++)
	{
		n2++;
	}
	if (j >= i)
		i = j;
	length = i;
	while (size_r)
	{
		r++;
		size_r--;
	}
	for (; i; i--)
	{
		num += (n2[i] - '0' + n1[i] - '0') % 10 + carry;
		carry = 0;
		if (n2[i] - '0' + n1[i] - '0' > 9)
			carry = 1;
	}
	if (length > rsiz)
		return (0);
        if (length == rsiz && carry == 1)
		return (0);
	else
	{
		for (; rsiz; rsiz--)
		{
			r[rsiz] = (num % 10) + '0';
			num -= num % 10;
		}
	}
	return (p);

}
