#include <stdio.h>

/**
 * _strcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: Source
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y;

	while (src[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	return (dest);
}
