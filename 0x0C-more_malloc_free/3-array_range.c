#include "main.h"
/**
 * array_range - A function that creates an array of integers.
 * @min: Minimum value.
 * @max: Maximum value.
 * Return: Pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min > max)
		return(NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (!ptr)
		return (NULL);
	for (; max >=  min; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);

}
