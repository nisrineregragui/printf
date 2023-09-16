#include "main.h"
int main(void)
{
int c,d;
char *str = "string";
char k = 'a';
_printf("hey\n");
c = _printf("hey");
printf("\n%d\n",c);
_printf("this is a %s\n",str);
_printf("this is a character %c\n",k);
d = _printf("this is a character%c%and this is a %s\n",k,str);
printf("\n%d\n",d);
return (0);
}
