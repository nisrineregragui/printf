#include "main.h"
/*comment*/
/*s*/int bin(va_list args)/*s*/
{
unsigned int binary[32], num;
int i = 0;
int len = 0;
num = va_arg(args, unsigned int);
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
