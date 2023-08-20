#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int specifier(va_list arg, const char format);
int print_str(char *c);

#endif
