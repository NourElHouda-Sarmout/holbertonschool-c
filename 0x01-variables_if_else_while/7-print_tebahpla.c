#include <stdio.h>

/* Solve Task 7 */

/**
 *main- print reverse alphabet in lowercase
 *Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);

	putchar('\n');

	return (0);
}
