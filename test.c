#include "main.h"
int main(void)
{
int c;
char *str = "string";
char k = 'a';
_printf("hey\n");
c = _printf("hey");
printf("\n%d\n",c);
_printf("this is a %s\n",str);
_printf("this is a character %c\n",k);
_printf("this is a character %c and this is a %s\n",k,str);
return (0);
}