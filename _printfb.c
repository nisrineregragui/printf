#include "main.h"
int binary(int num)
{
int i, count //still looking for a way to convert integer to binary and return the number of bits



int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format != '%')
{
_putchar(*format);
count++;
}
else
{
format++;
if (*format == 'b')
{
num = va_arg(args, int);
binary(num);
count += binary(num);
}
}
}
return (count);
}

