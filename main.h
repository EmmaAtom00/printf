#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int specifier(va_list arg, const char *format);

#endif
