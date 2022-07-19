#include <unistd.h>

/**
 * _strstr - locates a substring
 * @haystack: entire string.
 * @needle: substring.
 *
 * Return: pointer to the beginning of located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;

		while (*haystack != '\0' && *j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (i);
		haystack = i + 1;
	}
	return (0);
}
