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
	int len = 0;
<<<<<<< HEAD
	int len2 = 0;
	char *str = "I am a new born";
	
	len = _printf("Let's print a simple sentence.\n");
	len2 = printf("Let's print a simple sentence.\n");
	printf("\nLen:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);	
=======
        int len = 0;
>>>>>>> e5252dd804d706ea69d79f2d8c60bdf52675929c

	len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
        len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	len2 = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);
	
	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = _printf("%s", "This sentence is retrieved from va_args!\n");
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	len2 = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len2 = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len2 = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf("%%");
	len2 = _printf("%%");
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf("Should print a single percent sign: %%\n");
	len2 = _printf("Should print a single percent sign: %%\n");
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	len2 = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');

	len = _printf("css%ccs%scscscs", 'T', "Test");
	len2 = _printf("css%ccs%scscscs", 'T', "Test");
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf(str);
	len2 = _printf(str);
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf("man gcc:\n%s", str);
	len2 = _printf("man gcc:\n%s", str);
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf(NULL);
	len2 = _printf(NULL);
	printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf("%c", '\0');
	len2 = _printf("%c", '\0');
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf("%");
	len2 = _printf("%");
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf("%!\n");
	len2 = _printf("%!\n");
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	len = _printf("%K\n");
	len2 = _printf("%K\n");
        printf("\nLen:[%d]\n", len);
        printf("Len1:[%d]\n\n", len2);

	return (0);

}
