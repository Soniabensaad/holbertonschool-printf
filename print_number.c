#include "main.h"
/**
 * funct_number - prints number
 * @arg: list of arguments the function prints is recieving
 * Return: return the length of integr
 */
int funct_number(va_list arg)

{
	int n, m = 1, c = 0;
	unsigned int k;

	n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		k = n * -1;
		c++;
	}
	else
	{
		k = n;
	}

	while ((k / m) >= 10)
	{
		m = m * 10;
	}
	while (m != 0)
	{
		c = c + _putchar(k / m + '0');
		k = k % m;
		m = m / 10;
	}
	return (c);
}


