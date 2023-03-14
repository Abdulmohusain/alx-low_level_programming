#include <stdlib.h>
#include "main.h"
/**
 * str_concat - A function that concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 * Return: pointer should point to a newly allocated
 * space in memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	unsigned int i = 0;
	char *str;

	if (s1 == NULL)
		s1[0] = '\0';		
	if (s2 == NULL)
		s2 = '\0';
	while (s1[lens1])
		lens1++;
	while (s2[lens2])
		lens2++;
	str = malloc((lens1 + lens2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (*s1)
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		str[i] = *s2;
		s2++;
		i++;
	}

	return (str);
}
