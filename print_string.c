#include "main.h"
/**
 * print_string - prints strings
 * @arg: list of arguments the function prints is recieving
 * Return: return the length of the string
*/
int funct_string(va_list arg)
{
unsigned int i;
char *str;

str = va_arg(arg, char*);
if (str == 0)
str = "(null)";
for (i = 0; str[i] != 0; i++)
_putchar(str[i]);
return(i);
}
