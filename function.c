#include "main.h"

/**
 * print_str - handle string specifier
 * @c: converter specifier
 * Return: always return 0 for success
 */

int print_str(char *s)
{
	int count;

	while (*s)
	{
		count += putchar(*s);
		s++;
	}
	return (count);
}
