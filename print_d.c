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
	int a = 0, nega = 0;
	if (num < 0)
	{
		a++;
	num *= -1;
	nega++;
	}
	if (num == 0)
	{
	len++;
		_putchar(0 + '0')
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
	if (nega == 1)
	{
		len++;
	}
        return (len);
}
