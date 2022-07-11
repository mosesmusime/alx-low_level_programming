#include <unistd.h>
#include "main.h"

/**
 * print_square - draws a square
 * @size: The character to print
 *
 * Return: 0
 */
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
	for (a = 0; a < size; a++)
	{
	for (b = 1; b <= size; b++)
	{
	if (a == size)
	{
		break;
	}
	else
	{
		_putchar('#');
	}
	}
	_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
