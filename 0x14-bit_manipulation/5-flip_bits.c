/**
 * flip_bits - returns the number of bits needed to flip to get from
 * one number to another
 * @n: initial number
 * @m: number to flip to
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m, b = 0;

	while (a > 0)
	{
		b += (a & 1);
		a >>= 1;
	}

	return (b);
}
