#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(charType));
	printf("Size of an int: %lu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long intType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long intType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType)),
	return (0);
}
