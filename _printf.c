#include "main.h"
/*printf*/int _printf(const char *format, ...)/*f*/
{
va_list args;
char *string;
int n_printed = 0;
va_start(args, format);
while (*format != '\0')
{
if(*format != '%')
{
_putchar(*format);
n_printed++;
}
else
{
format++;
if(*format == 'c')
{
putchar(va_arg(args, int));
n_printed++;
}
else if(*format == 's')
{
string = va_arg(args, char *);
while (*string != '\0')
{
_putchar(*string);
string++;
n_printed++;
}
}
else if (*format  == '%')
{
_putchar('%');
n_printed++;
}
}
format++;
}
va_end(args);
return (n_printed);
}
