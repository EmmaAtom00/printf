#include "main.h"

/**
 * specifier - specifier for task 1 (s, c, %)
 * @arg: arguments container
 * @format: converter identifier
 *
 * Return: the number of character printed
 */

int specifier(va_list arg, const char *format)
{
	int count = 0;
	char ch, *str;

	if (*format == 'c')
	{
		ch = va_arg(arg, int);
		putchar(ch);
		count++;
	}
	else if (*format == '%')
	{
		putchar(*format);
		count++;
	}
	else if (*format == 's')
	{
		str = va_arg(arg, char *);
		count += print_str(str);
	}

	return (count);
}
