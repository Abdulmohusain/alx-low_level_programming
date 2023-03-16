#include "main.h"
/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: Number of elementrs to be copied in @s2 starting from index 0.
 * Return: Pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;

	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (; i < len1 + n; i++)
	{
		if (i >= len1)
		{
			ptr[i] = *s2;
			s2++;
		}
		else
		{
			ptr[i] = *s1;
			s1++;
		}
	}
	ptr[i] = '\0';

	return (ptr);
}
