#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	char charType;
	long int longintType;
        long long int longlongintType;

	printf("Size of a char: %lu bytes(s)\n", sizeof(charType));
	printf("Size of an int: %lu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType)),
	return (0);
}
