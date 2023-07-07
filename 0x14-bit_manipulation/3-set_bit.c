#include "main.h"
/**
 * set_bit - A function that sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number.
 * @index: Index to set the bit.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	a = a << index;
	*n = *n | a;
	if ((*n & a) == a)
		return (1);
	else
		return (-1);
}
