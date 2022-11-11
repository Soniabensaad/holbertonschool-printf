#include "main.h"
/**
 * _printf - a fucntion that prints a char or a string
 * @format:  a string starting with % and ends with conversion character
 * Return: the number of character the function is printing
 */
int _printf(const char *format, ...)
{
	st_fmt st_format[] = {
		{"c", funct_char},
		{"s", funct_string},
		{"%", funct_percent},
		{"d", funct_number},
		{"i", funct_number},
		{"R", funct_rot_13},
		{NULL, NULL}};

	va_list arg;
	int c = 0;

	va_start(arg, format);
	c = match_function(format, arg, st_format);
	va_end(arg);
	return (c);
}
