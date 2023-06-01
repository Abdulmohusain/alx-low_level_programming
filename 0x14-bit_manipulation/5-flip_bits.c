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
	unsigned long int *list_n = conv_bin_into_arr(n);
	unsigned long int *list_m = conv_bin_into_arr(m);
	unsigned long int i = 0;

	while (i < 33)
	{
		printf("list_n[%ld] = %ld\n", i,*list_n[i]);
		i++;
	}
	i = 0;
	while (i < 33)
	{
		printf("list_m[%ld] = %ld\n", i,*list_m[i]);
		i++;
	}
}
/**
 * conv_bin_into_arr - A Recussion function.
 * @n: The number
 * @a: The complementary bit
 * @m: The control
 */
unsigned long int *conv_bin_into_arr(unsigned long int n)
{
	unsigned long int m, x;
	unsigned long int *a[] = malloc(sizeof(unsigned long int) * 32);

	m = 1;
	x = 32;
	while (x > -1)
	{
		if ((n & m) == m)
			a[x] = m;
		if ((n & m) == 0)
			a[x] = 0;
		printf
		m <<= 1;
		x--;
	}
	return (a);
}
