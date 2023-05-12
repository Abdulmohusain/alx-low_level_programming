#include "main.h"
/**
 * binary_to_uint - function that converts a
 * binary number to an unsigned int.
 * @b: The binary number.
 * Return:the converted number, or 0 if there is
 * one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 1;
	unsigned int number = 0;
	unsigned int i;
	unsigned int start = 0;

	if (b == NULL)
		return (0);
	while (b[start])
	{
		if (b[start] > '1' || b[start] < '0')
			return (0);
		start++;
	}
	start--;
	for (i = start; i; i--)
	{
		if (b[start] == '1')
			number += power;
		power *= 2;
		start--;
	}
	if (b[0] == '1')
		number += power;
	return (number);
}
