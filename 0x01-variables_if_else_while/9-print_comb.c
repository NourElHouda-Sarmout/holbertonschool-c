#include <stdio.h>

/* Solve Task 9 */

/**
 *main- print all possible combinations of single-digit numbers
 *Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');

	}
	putchar('\n');

	return (0);
}
