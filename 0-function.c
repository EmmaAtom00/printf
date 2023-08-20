#include "main.h"

/**
 * print_str - print string
 * @c: string to be printed
 *
 * Return: return the number of character printed
 */

int print_str(char *c)
{
	int count = 0;

	while (*c)
	{
		putchar(*c);
		c++;
		count++;
	}

	return (count);
}
