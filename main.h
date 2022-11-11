#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

/**
 * format structure - a structure that defines token
 * @fmt: index
 * @funct: pointer to the function printf
 */
typedef struct st_fmt
{
	char *fmt;
	int (*funct)(va_list arg);
} st_fmt;

int _putchar(char c);
int _printf(const char *format, ...);
int funct_percent(va_list);
int funct_string(va_list);
int funct_char(va_list);
int funct_number(va_list);
int funct_rot_13(va_list );
int match_function(const char *, va_list, st_fmt st_format[]);

#endif
