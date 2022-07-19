#include <unistd.h>

/**
 * _strchr - writes the character c to stdout
 * @s: The character to print
 * @c: a
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return ('\0');
}
