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
	printf("___________________\n\n");
	
	
	
	
	printf("Standard function\n___________________\n");
	printf("Unknown\n");
	printf("");
	printf(NULL);
	printf("Character:[%c]\n", 'H');
	printf("String:[%s]\n", "I am a string !");
	printf("Let's try to printf a simple sentence.\n");
	printf("Percent:[%%]\n");
	return (0);
}
