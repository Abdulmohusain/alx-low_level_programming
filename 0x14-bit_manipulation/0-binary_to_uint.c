#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: Return: the converted number, or 0 if, there is one or more chars
 * in the string b that is not 0 or 1, or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int power = 1;
	int i = 0;
	int j = 0;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	i--;
	for (j = i; j > -1; j--)
	{
		if (b[j] == '1' || b[j] == '0')
		{
			if (b[j] == '1')
				num += power;
		} else
			return (0);
		power *= 2;
	}
	return (num);
}
