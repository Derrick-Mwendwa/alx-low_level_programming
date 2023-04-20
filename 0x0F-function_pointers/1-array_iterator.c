#include <stdio.h>

/**
 * array_iterator - execute a function
 * @array: array to iterate over
 * @size: size of array
 * @action: pointer to the function array_iterator
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
