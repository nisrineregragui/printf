#include "main.h"
/**
 * _printf - function printf
 * @format: format
 * Return: 1 or -1
 */

int _printf(const char *format, ...)/*f*/
{
	va_list args;
	char *string;
	int n_printed = 0, a;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			a = 0; /*..*/
			_putchar(*format);
			n_printed++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				_putchar(va_arg(args, int));
				n_printed++;
			}
			else if (*format == 's')
			{
				string = va_arg(args, char *);
				while (*string != '\0')
				{
					if (*string == '%') /*just added this condition i will check it later*/
					{
						n_printed++;
						a = 1;
						break;
					}
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
		if (a == 0) /*....*/
		{
			format++;
		}
	}
	va_end(args);
	return (n_printed);
}
