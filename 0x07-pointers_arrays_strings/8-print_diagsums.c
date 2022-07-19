#include <stdio.h>

/**
 * print_diagsums - writes the character c to stdout
 * @a: The character to print
 * @size: aja
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagonal = 0;
	int seconddiagonal = 0;

	for (i = 0; i < (size * size); i += size + 1)
	{
		diagonal += a[i];
	}
	for (i = size - 1; i < (size * size - 1); i += size - 1)
	{
		seconddiagonal += a[i];
	}
	printf("%i, %i\n", diagonal, seconddiagonal);
}
