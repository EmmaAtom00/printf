#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Let's print a simple sentence.\n");
	_printf("Let's print a simple sentence.\n");
	printf("%c", 'S');
	_printf("%c", 'S');
	printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf(NULL);
	printf(NULL);
	_printf("%c", '\0');
	printf("%c", '\0');
	_printf("%!");
	printf("%!");
	_printf("%%");
	printf("%%");
	_printf("Should print a single percent sign: %%\n");
	printf("Should print a single percent sign: %%\n");
	_printf("%K\n");
	printf("%K\n");

	return (0);
}
