/**
 * rot13 - encodes a string into rot13
 * @Ch: string
 *
 * Return: pointer to encoded string
 */
char *rot13(char *Ch)
{
	int i;


	for (i = 0; Ch[i] != '\0'; i++)
	{
		if ((*(Ch + i) >= 'a' && *(Ch + i) < 'n')
		    || (*(Ch + i) >= 'A' && *(Ch + i) < 'N'))
			*(Ch + i) += 13;

		else if ((*(Ch + i) > 'm' && *(Ch + i) < 'z')
			 || (*(Ch + i) > 'M' && *(Ch + i) < 'Z'))
			*(Ch + i) -= 13;
	}

	return (Ch);
}
