/**
 * helper - finds natural square root numbers
 * @i: input number
 * @j: iterator input
 *
 * Return: the resulting square root
 */
int helper(int i, int j)
{
	int a;

	a = j * j;

	if (a == i)
		return (j);
	else if (a < i)
		return (helper(i, j + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
