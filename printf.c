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

	va_start(arg, format);
	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			count += specifier(arg, format);
		}
		else
		{
			if (*format != '%')
			{
				count++;
				putchar(*format);
			}
			else
			{
				return (-1);
			}
		}
		format++;
	}
	va_end(arg);
	return (count);
}

/**
 * specifier - handle first task specifier
 * @list: argument list
 * @form: converter specifier
 * Return: count
 */

int specifier(va_list list, const char *form)
{
	char *str, ch;
	int count = 0;

	if (*form == 's')
	{
		str = va_arg(list, char *);
		count += print_str(str);
	}
	else if (*form == 'c')
	{
		ch = va_arg(list, int);
		count += print_chr(ch);
	}
	else if (*form == '%' && *form != 0)
	{
		count++;
		putchar('%');
	}
	else
	{
		count += specifier2(list, form);
	}
	return (count);
}
