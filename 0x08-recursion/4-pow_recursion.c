/**
 * _pow_recursion - m to power of n
 * @m: int to raise
 * @n: power to raise to
 *
 * Return: m raised to n
 */
int _pow_recursion(int m, int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (m * _pow_recursion(m, n - 1));
}
