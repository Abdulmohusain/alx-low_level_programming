#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the
 * string given as a parameter.
 * @str: string to be duplicated
 * Return: Pointer to the string
 */
char *_strdup(char *str)
{
	char *h;
	unsigned int i;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;

	h = malloc((len - 1) * sizeof(char));
	if (h == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		h[i] = str[i];
	return (h);

}
