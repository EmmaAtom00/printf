#include "main.h"

/**
 * specifier_1 - specifier for %d and %i
 * @arg: list of arguments
 * @format: the conversion specifer
 *
 * Return: return the number of characters
 */

int specifier_1(va_list arg, const char *format)
{
	int count = 0, num;
	char c = '%';

	if (*format == 'd' || *format == 'i')
	{
		num = va_arg(arg, int);

		if (num == '\0')
			count += write(1, "0", 1);
		else
			count += print_num(num);
	}
	else
	{
		count += write(1, &c, 1);
		count += write(1, format, 1);
	}

	return (count);
}

/**
 * print_num - print integers
 * @num: integer to be printed
 *
 * Return: numbers of character
 */

int print_num(int num)
{
	int count = 0, *buffer, temp;
	int isNeg, i = 0, j;
	char digit;

	isNeg = num;

	if (num == INT_MIN)
	{
		count += write(1, "-2147483648", 11);
		return (count);
	}

	if (num < 0)
		num = -1 * num;

	temp = num;

	if (num == 0)
		count++;
	else
	{
		while (temp != 0)
		{
			temp /= 10;
			count++;
		}
	}

	buffer = malloc(count * sizeof(int));

	if (buffer != NULL)
	{
		i = count - 1;
		while (num != 0)
		{
			buffer[i] = num % 10;
			num /= 10;
			i--;
		}

		if (isNeg < 0)
			count += write(1, "-", 1);

		for (j = 0; j < count; j++)
		{
			digit = '0' + buffer[j];
			write(1, &digit, 1);
		}

		free(buffer);
	}
	return (count);
}
