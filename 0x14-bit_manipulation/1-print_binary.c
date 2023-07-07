#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	static unsigned long int a = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (a <= n)
	{
		if ((n & a) == a)
			_putchar('1');
		else
			_putchar('0');
		a = a << 1;
	}
}
