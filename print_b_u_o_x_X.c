#include "main.h"

/**
 * convert_to_base - Function to convert a decimal
 * @num: number
 * @nbr: nbr
 * @bs: base
*/
void convert_to_base(unsigned long int num, char *nbr, int bs)
{
	int i = 0;

	while (num) 
	{
		int r = num % bs;
		num = num / bs;
		nbr[i] = r;
		i++;
	}
}

/**
 * print_base - Function to print the converted number
 * @nbr: number
 * @length: length
 * @heex: heex
*/
void print_base(char *nbr, int length, char heex)
{
	char *hex_l = "0123456789abcdef";
	char *hex_u = "0123456789ABCDEF";
    
	for (int y = length - 1; y >= 0; y--)
	{
		if (heex == 'x')
        	_putchar(hex_l[(int)nbr[y]]);
		else if (heex == 'X')
			_putchar(hex_u[(int)nbr[y]]);
		else
			_putchar(nbr[y] + '0');
	}
}

/**
 * _print_hex - function print hex
 * @num: number
 * @heex: base
 * Return: integer
 */
int _print_hex(unsigned long int num, char heex)
{
	char nbr[64];
	int bs;

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}

	if (heex == 'b')
		bs = 2;
	else if (heex == 'o')
		bs = 8;
	else
		bs = 16;

	convert_to_base(num, nbr, bs);
	print_base(nbr, bs, heex);

	return (bs);
}

/**
 * print_u - function print unsigned numbers
 * @num: number
 * Return: number of bytes
 */

int print_u(unsigned int num)
{
	int i = 0;

	if (num <= 9)
		i += _putchar(num + 48);
	else
	{
		i += print_u(num / 10);
		i += print_u(num % 10);
	}
	return (i);
}
