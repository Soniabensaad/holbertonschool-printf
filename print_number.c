#include "main.h"
/**
 * print_number - prints numbers
 * @arg: list of arguments the function prints is recieving
 * Return: return  numbers
 */

int print_number(va_list arg)
{
	long int n = va_arg(arg, int), m = 1, c = 0;

	if (n < 0)
	{
		putchar('-');
		c++;
		n = -n;
	}
	while (n / m >= 10)
		m *= 10;

	while (m > 0)
	{
		putchar('0' + n / m);
		c++;
		n %= m;
		m /= 10;
	}
	return (c);
}
