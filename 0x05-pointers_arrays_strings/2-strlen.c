#include "main.h"

/**
 * _strlen - writes the character
 * @s: The pointer
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
	a++;
	}
return (a);
}
