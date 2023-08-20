#include "main.h"

/**
 * _printf - printf clone
 * @format: formated string
 *
 * Return: return the numbers of charater printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;

	va_start(arg, format);

	if (*format == NULL)
		return (-1);

	while(*format)
	{
		if (*format != '%')
		{
			putchar(*fornat);
			count++;
		}
	}

	return (count);
}
