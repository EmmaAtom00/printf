#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int specifier(va_list arg, const char *format);
int specifier_1(va_list arg, const char *format);
int print_num(int num);

#endif
