#include "search_algos.h"
/**
 * binary_search - A function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 * @array: the array
 * @size: the size
 * @value: the value
 * Return:  the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t top = size, bottom = 0, midpoint;

	if (array == NULL)
		return (-1);
	midpoint = (top + bottom) / 2;
	if (midpoint > value)
	{
		bottom = midpoint
	}
}
