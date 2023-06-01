#include "main.h"
/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: The number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int a, m;

	m = 0;
	a = 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	conv_bin(n, a, m);
}
/**
 * conv_bin - A Recussion function.
 * @n: The number
 * @a: The complementary bit
 * @m: The control
 */
void conv_bin(unsigned long int n, unsigned long int a, unsigned long int m)
{
	if (m >= n)
		return;
	if ((n & a) == a)
		m += a;
	conv_bin(n, a << 1, m);
	if ((n & a) == 0)
		_putchar('0');
	else
	{
		_putchar('1');
	}
}
