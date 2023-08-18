#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: a charcter string
 * Return: always return 0
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list arg;
	char *str;

	va_start(arg, format);
	if (format == NULL)
		return(-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				str = va_arg(arg, char *);
				print_str(str);
			}
		}
		else
		{
			count += putchar(*format);
		}
		format++;
	}
	va_end(arg);
	return (count);
}

/**
 * specifier1 - handle first task specifier
 * @c: converter specifier
 * Return: always return 0 for success
 */

