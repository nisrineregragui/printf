#include "main.h"

/**
 * print_s - prints a string
 * @str: the string to print
 * Return: the length of the string
 */

int print_s(char *str)
{
	int i, len = 0;

	if (str == NULL)
	{
	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	if (!(str[i] >= 32 && str[i] < 127))
	{
	len += _putchar('\\');
	len += _putchar('x');
	if (str[i] <= 15)
	{
	len += _putchar('0');
	}
	len += _putchar((str[i] >> 4) + '0');
	len += _putchar((str[i] & 0xF) + '0');
	}
	else
	{
		len += _putchar(str[i]);
	}
	}

	return (len);
}

