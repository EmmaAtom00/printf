#include "main.h"

/**
 * specifier - task 0 specifier handler
 * @arg: list of arguments
 * @format: specifier
 *
 * Return: the numbers of characters printed
 */

int specifier(va_list arg, const char *format)
{
	int count = 0;
	char ch, *str;

	if (*format == 'c')
	{
		ch = va_arg(arg, int);
		if (ch != '\0')
		{
			count += write(1, &ch, 1);
			count++;
		}
		else
		{
			count++;
			return (1);
		}
	}
	else if (*format == '%')
	{
		count += write(1, format, 1);
	}
	else if (*format == 's')
	{
		str = va_arg(arg, char *);
		if (str != NULL)
		{
			count += write(1, str, strlen(str));
		}
		else
			count += write(1, "(null)", 6);
	}
	else
	{
		count += specifier_1(arg, format);
	}
	return (count);
}
