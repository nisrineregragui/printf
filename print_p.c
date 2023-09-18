#include "main.h"
/**
 * comment
 * betty
 * style
 */
int print_p(void *p)
{
int i = 0;
unsigned long adress;
if (p == NULL)
{
i += _putchar('(');
i += _putchar('n');
i += _putchar('i');
i += _putchar('l');
i += _putchar (')');
return (i);
}
adress = (unsigned long int)p;
i += _putchar('0');
i += _putchar('x');
i += _print_hex(n, 'x');
return (i);
}

