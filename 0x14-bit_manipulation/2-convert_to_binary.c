#include "main.h"
/**
 * conv_bin - A function that converts an int to binary and prints it.
 * @i: The integer.
 */
void conv_bin(unsigned int i)
{
	char b;
	if (i == 0)
		return;
	conv_bin(i / 2);
	b = ((i % 2) + '0');
	write(1, &b, 1);
}
