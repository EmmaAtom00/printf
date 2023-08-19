#include "main.h"

/**
 * print_str - print string
 * @s: string to be printed
 * Return: always return 0 for success
 */

int print_str(char *s)
{
	int count = 0;

	while (*s)
	{
		count += putchar(*s);
		s++;
	}

	return (count);
}


/**
 * print_chr - prints character
 * @c: character to be printed
 * Return: number of character
 */

int print_chr(char c)
{
	int count = 0;

	count += putchar(c);

	return (count);
}
