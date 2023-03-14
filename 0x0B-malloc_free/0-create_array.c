#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: First character of the array.
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *h;
	unsigned int counter = 0;

	if (size == 0 || h == NULL)
		return (NULL);
	h = malloc(size * sizeof(char));
	for (; counter < size; counter++)
		h[counter] = c;
	return (h);
}
