#include "main.h"
/**
 * funct_reverse - a function that reverses a string.
 * @arg: list of arguments the function prints is recieving
 * Return: count characters.
 */
int funct_reverse(va_list arg)
{
    int i, j, c = 0;
    char *s;
    s = va_arg (arg, char*);
    for (i = 0; s[i] != '\0'; i++)
    {
        c++;
    }
    for (j - 1; j >= 0; j--)
    {
        _putchar(s[j]);
        
    }
    return (c);

}
