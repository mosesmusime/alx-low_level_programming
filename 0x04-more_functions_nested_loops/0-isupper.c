#include <unistd.h>
#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c: The int to check if is upper
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
		return (0);
}
