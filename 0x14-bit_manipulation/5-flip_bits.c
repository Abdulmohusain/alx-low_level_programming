#include "main.h"
/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: The target number.
 * @m: The number to flip bits in @n to get to m.
 * Return: the number of bits you would need to flip to get
 * from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, a;
	unsigned int bit = 0;

	i = 0;
	a = 1;
	for (i = 0; i <= 32; i++)
	{
		if ((m & a) != (n & a))
			bit++;
		a <<= 1;
	}
	return (bit);
}
