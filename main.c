#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("%K\n");
	_printf("%!\n");
	_printf("%c", '\0');
	_printf(NULL);
	_printf("man gcc:\n%s", str);
	_printf(str);
	_printf("css%ccs%scscscs", 'T', "Test");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

    return (0);
}
