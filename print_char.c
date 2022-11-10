#include "main.h"
/**
 * funct_char - a function that prints a character
 * @arg: the list of arguments that prints is recieving
 * Return: return 1 if ch is a character else 0
 */
int funct_char(va_list arg)
{
	char ch;

	ch = (va_arg(arg, int));
	_putchar(ch);
	return (1);
}
