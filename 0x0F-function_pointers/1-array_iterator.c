#include "function_pointers.h"
/**
 * array_iterator - A function that executes a function
 * given as a parameter on each element of an array.
 * @array: The array
 * @size: Array size
 * @action: dff
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
