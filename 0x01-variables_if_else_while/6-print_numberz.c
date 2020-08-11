#include <stdio.h>

/* Solve Task 6 */

/**
 *main- prints all single digit numbers using putchar
 *Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
