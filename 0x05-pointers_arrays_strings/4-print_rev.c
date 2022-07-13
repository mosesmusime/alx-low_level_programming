#include "main.h"

/**
 * print_rev - prints a reversed string
 * @s: The pointer
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
	a++;
	}
	for (a = a - 1; a >= 0; a--)
	{
	_putchar(*(s + a));
	}
_putchar('\n');
}
