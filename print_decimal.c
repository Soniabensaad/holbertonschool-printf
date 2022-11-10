#include "main.h"
/**
 * funct_decimal - prints decimal
 * @arg: list of arguments the function prints is recieving
 * Return: return the length of decimal
 */
int funct_decimal(va_list arg)
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
		putchar( n / m + '0');
		c++;
		n %= m;
		m /= 10;
	}
	return (c);
}
