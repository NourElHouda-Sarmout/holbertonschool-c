#include <stdio.h>

/* Solve Task 12 */

/**
 *main- print different combinations of three-digit numbers
 *Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (x = j + 1; x < 10; x++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(x + '0');

				if (i == 7 && j == 8 && x == 9)
				{
				}
				else
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
