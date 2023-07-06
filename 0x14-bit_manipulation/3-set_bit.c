#include "main.h"

/**
 * set_bit - sets value of bit at index to 1
 * @n: pointer to bit
 * @index: index to set the value
 *
 * Return: 1 if success, -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
