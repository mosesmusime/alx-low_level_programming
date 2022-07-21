#include <unistd.h>

/**
 * auxiliar - writes the character c to stdout
 * @n: The character to print
 * @b: asd
 *
 * Return: 0
 */
int auxiliar(int n, int b)
{
	if (b == 1)
	{
		return (1);
	}
	if (n % b == 0)
	{
		return (0);
	}
	else
	{
		return (auxiliar(n, b - 1));
	}
}

/**
 * is_prime_number - writes the character c to stdout
 * @n: The character to print
 *
 * Return: 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (auxiliar(n, n - 1));
	}
}
