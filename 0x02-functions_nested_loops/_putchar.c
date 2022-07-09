#include <unistd.h>
/**
 * main - Entry point
 *
 * Description - _putchar writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, return -1 and set errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
