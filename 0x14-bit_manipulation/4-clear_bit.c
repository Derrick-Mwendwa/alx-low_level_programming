/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: pointer to bit
 * @index: index to set value
 *
 * Return: 1 if success, -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
