#include "main.h"

/**
 * print_d - prints a number
 * @num: the number to print
 * Return: the length of the number
 */

int print_d(int num)
{
    int len = 0, i;
    int digits[10];
    int a = 0;

    if (num < 0)
    {
        a = 1;
        num *= -1;
        len++; /* Increment len for the minus sign*/
    }

    while (num > 0)
    {
        digits[len] = num % 10;
        num /= 10;
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        if (a == 1)
        {
            _putchar('-');
            a = 0;
        }
        _putchar(digits[i] + '0');
    }

    return len;
}
