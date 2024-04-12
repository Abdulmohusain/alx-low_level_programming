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
	size_t top = size - 1, bottom = 0, midpoint, a;

	if (array == NULL)
		return (-1);
	print_array(array, bottom, top);
	for (a = 0; a < (size / 3) + 1; a++)
	{
		midpoint = (top + bottom) / 2;
		if (value > array[midpoint])
		{
			bottom = midpoint + 1;
		} else if (value < array[midpoint])
		{
			top = midpoint - 1;
		} else
		{
			if (top - bottom > 1)
			{
				print_array(array, bottom, top);
				return (midpoint);

			}
		}
		print_array(array, bottom, top);
		if (bottom == top)
		{
			return (top);
		} else if (top - bottom == 1)
		{
			if (value == array[top])
				bottom = top;
			if (value == array[bottom])
				top = bottom;
		}
	}
	return (-1);
}

/**
 * print_array - a function that print part of an array
 * @array: the array
 * @start: the index to start printing
 * @stop: the index to stop
 */
void print_array(int *array, int start, int stop)
{
	int i;

	for (i = start; i < stop + 1; i++)
	{
		printf("%d", array[i]);
		if (i == stop)
			printf("\n");
		else
			printf(", ");
	}
}
