#include <unistd.h>

/**
 * _strlen_recursion - writes the character c to stdout
 * @s: The character to print
 *
 * Return: 0.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	if (*s != '\0')
	{
		i = i + _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
