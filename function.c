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
		putchar(*s);
		count++;
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

	count++;
	putchar(c);

	return (count);
}

/**
 * printN - function to print interger with putchar
 * @num: num to be printed
 */

void printN(int num)
{
	if (num == 0)
		return;
	printN(num / 10);
	putchar('0' + (num % 10));
}
