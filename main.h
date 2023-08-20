#ifndef PRINT_F
#define PRINT_F

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int print_s(char *str);
int print_str(char *c);
int specifier(va_list list, const char *form);
int specifier2(va_list list, const char *form);
int print_chr(char c);
void printN(int num);
#include <stdio.h>

#endif
