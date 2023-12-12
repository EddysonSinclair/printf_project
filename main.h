#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int _printf(const char *format, ...);
int output_handler(const char *format, va_list ap);
int _putchar(int n);
int print_integer(va_list ap);
int print_hexadecimal(va_list ap, int uppercase);
int print_binary(va_list ap);
int print_decimal_unsignedint(va_list ap);
int print_octal(va_list ap);
int printstring(const char *str);
char *rot13(char *str);
void reverse_string(char *str);
#endif
