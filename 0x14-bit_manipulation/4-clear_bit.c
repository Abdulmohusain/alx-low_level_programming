#include "main.h"
int get_bit(unsigned long int n, unsigned int index);
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the number.
 * @index: index of bit to be cleared.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	int bit;

	a = 1;
	a <<= index;
	bit = get_bit(*n, index);
	if (bit == 1)
		*n ^= a;
	if ((bit | a) == a)
		return (-1);
	return (1);
}
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
