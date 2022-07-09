#include "main.h"
/**
 * main - Entry point
 *
 * Return: print to stdout the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
