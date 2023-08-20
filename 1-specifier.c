#include "main.h"

/**
 * specifier2 - handle first task specifier
 * @list: argument list
 * @form: converter specifier
 * Return: return count
 */

int specifier2(va_list list, const char *form)
{
	int i = va_arg(list, int);
	int isNeg = i;

	if (*form == 'd' || *form == 'i')
	{
		if (i < 0)
		{
			i = -1 * i;
		}
		if (i > 9)
		{
			if (isNeg < 0)
			{
				putchar('-');
			}
			printN(i);
			return (0);
		}
		else
		{
			putchar('0' + i);
			return (0);
		}
	}
	return (0);
}
