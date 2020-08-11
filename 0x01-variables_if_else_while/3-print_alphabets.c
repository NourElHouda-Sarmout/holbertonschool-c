#include <stdio.h>

/* Solve Task 3 */

/**
 *main- print the alphabet in lowercase then in uppercase
 *Return: 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
putchar(c);

for (c = 'A'; c <= 'Z'; ++c)
putchar(c);

putchar('\n');

return (0);
}
