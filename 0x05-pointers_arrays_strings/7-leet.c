#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @Ch: string
 *
 * Return: pointer to encoded string
 */
char *leet(char *Ch)
{

		replaceAll(Ch, 'a', '4');
		replaceAll(Ch, 'A', '4');
		replaceAll(Ch, 'e', '3');
		replaceAll(Ch, 'E', '3');
		replaceAll(Ch, 'o', '0');
		replaceAll(Ch, 'O', '0');
		replaceAll(Ch, 't', '7');
		replaceAll(Ch, 'T', '7');
		replaceAll(Ch, 'l', '1');
		replaceAll(Ch, 'L', '1');

	return (Ch);

}

/**
 * replaceAll - Replace all occurrence of a character in given string.
 * @str: string
 * @oldChar: char
 * @newChar: char
 *
 * Return: void
 */
void replaceAll(char *str, char oldChar, char newChar)
{
	int i = 0;

	/* Run till end of string */
	while (str[i] != '\0')
	{
		/* If occurrence of character is found */
		if (str[i] == oldChar)
		{
			str[i] = newChar;
		}

		i++;
	}
}
