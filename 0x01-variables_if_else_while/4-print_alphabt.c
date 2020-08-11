#include <stdio.h>

/* Solve Task 4 */

/**
 *main- print the alphabet in lowercase sauf q,e
 *Return: 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
if (c == 'e' || c == 'q')
{
}
else
{
putchar(c);
}

}
putchar('\n');

return (0);
}
