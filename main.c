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
	printf("Home Made function\n___________________\n");
	_printf("Unknown\n");
	_printf("");
	_printf(NULL);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Let's try to printf a simple sentence.\n");
	_printf("Percent:[%%]\n");
	_printf("%\n");
	_printf("%!\n");
        _printf("%K\n");
	_printf("%");
        _printf("%c", 'S');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
        _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
        _printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("%%");
        _printf("Should print a single percent sign: %%\n");
        _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
        _printf("css%ccs%scscscs", 'T', "Test");
        _printf("%c", '\0');
	_printf("___________________\n\n");
	
	
	
	
	printf("Standard function\n___________________\n");
	printf("Unknown\n");
	printf("");
	printf(NULL);
	printf("Character:[%c]\n", 'H');
	printf("String:[%s]\n", "I am a string !");
	printf("Let's try to printf a simple sentence.\n");
	printf("Percent:[%%]\n");
	printf("%\n");
	printf("%!\n");
	printf("%K\n");
	printf("%");
	_printf("%c", 'S');
	printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("%s", "This sentence is retrieved from va_args!\n");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%%");
	printf("Should print a single percent sign: %%\n");
	printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("css%ccs%scscscs", 'T', "Test");
	printf("%c", '\0');
	return (0);
}
