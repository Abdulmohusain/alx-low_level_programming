#include "search_algos.h"
/**
 * linear_search - A function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: the array
 * @size: the size of array
 * @value: the value to search for
 * Return:  the first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
