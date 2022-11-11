#include "main.h"
/**
 * funct_rot_13 - encodes a string using rot 13.
 * @arg: list of arguments the function prints is recieving
 * Return: count characters.
 */
int funct_rot_13(va_list arg)
{
int i = 0, j = 0, c = 0;
char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *s;
s = va_arg(arg, char *);
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; str1[j] != '\0'; j++)
{
if (s[i] == str1[j])
{
_putchar(str2[j]);
c++;
break;
}
if (str1[j + 1]== 0)
{
_putchar(s[i]);
c++;
}
}
}
return (c);
}
