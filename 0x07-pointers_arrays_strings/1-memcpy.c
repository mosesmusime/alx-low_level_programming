#include "main.h"

/**
 * _memcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: a
 * @n: a
 *
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
