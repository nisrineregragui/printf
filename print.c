#include "main.h"

/**
 * print_d - prints a number
 * @num: the number to print
 * Return: the length of the number
 */

int print_d(int num)
{
    int i = 0;

        if (num < 0)
        {
                i += _putchar('-');
                num = -num;
        }
        if (num / 10 == 1)
	{    i += print_d(num / 10);
	}
                i += _putchar(num%10 + '0');
        return (i);
}
