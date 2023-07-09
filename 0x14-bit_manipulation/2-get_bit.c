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

	if (index >= 31)
		return (-1);
	a = a << index;
	if ((n & a) == a) 
		return (1);
	else if ((n & a) == 0) 
		return (0);
	return (-1);
}
