#include "main.h"

/**
 * swap_int - writes the character c to stdout
 * @a: pointer a
 * @b: pointer b
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
