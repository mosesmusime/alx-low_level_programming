#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: THe character to print
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
	for (a = 0; a < n; a++)
	{
	for (b = 0; b <= n; b++)
	{
	if (a == b)
	{
		_putchar('\\');
		break;
	}
	else
	{
		_putchar(' ');
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
