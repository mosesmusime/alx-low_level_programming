#include <unistd.h>

/**
 * factorial - writes the character c to stdout
 * @n: The character to print
 *
 * Return: 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
