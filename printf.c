
#include "main.h"

/**
 * _printf - printf clone
 * @format: formatted string
 *
 * Return: return the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	while (*format)
	{
		if (*format != '%')
		{
			count++;
			write(1, format, sizeof(char));
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			else
				count += specifier(arg, format);
		}
		format++;
	}

	va_end(arg);

	printf("%d\n", count - 1);
	return (count - 1);
}
