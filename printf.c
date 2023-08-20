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

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			else
			{
				count += specifier(arg, format);
			}
		}
		format++;
	}

	return (count);
}
