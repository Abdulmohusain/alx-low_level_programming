#include "main.h"
/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: Elements in the array.
 * @size: size in bytes.
 * Return: Pointer to array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p)
		return (NULL);
	for (; i < size * nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
