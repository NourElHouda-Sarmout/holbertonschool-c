#include <stdio.h>

/* Solve Task 10 */

/**
 *main- print all possible combinations of double-digit numbers
 *Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i != 99)
		{
			putchar (',');
			putchar (' ');
		}

	}
	putchar ('\n');

	return (0);
}
