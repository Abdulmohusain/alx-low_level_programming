#include "main.h"
/**
 * get_bit - function that returns the
 * value of a bit at a given index.
 * @n: The number
 * @index: The index
 * Return: the value of the bit at index
 * index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a = 1;
	unsigned long int bit;

	a = a << index;
	if ((n & a) == a)
		bit = 1;
	else
		bit = 0;
	return (bit);
}
