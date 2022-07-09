#include "main.h"
/**
 * time_table - prints 9 time table, starting with 0.
 *
 * Return: 0
 */
void times_table(void)
{
	int i, d, pes;

	for (i = 0; i < 10 ; i++)
	{
	_putchar('0');
	for (d = 1; d < 10 ; d++)
	{
	pes = i * d;
	if (pes > 9)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(pes / 10 + '0');
	_putchar(pes % 10 + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + pes);
	}
	}
	_putchar('\n');
	}
}
