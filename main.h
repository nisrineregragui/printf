#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_d(int num);
int print_s(char *str);
int print_handler(const char *format, va_list args);
int handle_format(char format, va_list args);
int handle_unknown_format(char format);
int _print_hex(unsigned long int num, char heex);
int print_u(unsigned int num);

int print_hex(unsigned int n, unsigned int c);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);

#endif

