#include <stdio.h>

/**
 *
 *main- prints the size of various types
 *Return: 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int LongIntType;
	long long int LongLongIntType;
	float floatType;

	printf("Size of char: %ld byte(s)\n", sizeof(charType));
	printf("Size of int: %ld byte(s)\n", sizeof(intType));
	printf("Size of long int: %ld byte(s)\n", sizeof(LongIntType));
	printf("Size of long long int: %ld byte(s)\n", sizeof(LongLongIntType));
	printf("Size of float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
