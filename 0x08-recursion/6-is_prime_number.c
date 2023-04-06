int helper(int n, int c);
int _sqrt(int a, int b);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: input
 *
 * Return: 1 if prime otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (helper(n, 2));
}

/**
 * _sqrt - gets square root of a number
 * @a: input number
 * @b: divisor
 *
 * Return: square root of a
 */
int _sqrt(int a, int b)
{
	int c;

	c = b * b;
	if (c >= a)
		return (b);
	else
		return (_sqrt(a, b + 1));
}

/**
 * helper - steps undergone
 * @n: input number
 * @c: divisor
 *
 * Return: 1 if prime otherwise 0
 */
int helper(int n, int c)
{
	if (n % c == 0)
		return (0);
	else if (_sqrt(n, 1) < c)
		return (1);
	else
		return (helper(n, c + 1));
}
