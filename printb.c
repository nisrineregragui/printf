#include "main.h"
/*comment*/
/*s*/int bin(num)/*s*/
{
unsigned int binary[32], i = 0, len = 0,num;
	while(num > 2)
		{
			binary[i] = num % 2;
			num /= 2;
			i++;
		}
	binary[i] = 1;
	while(i >= 0)
		{
			len += _putchar(binary[i] + '0');
			i--;
		}
return (len);
}
