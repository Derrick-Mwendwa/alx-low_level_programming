#include "main.h"

/**
 * factorial - gets factorial of a number
 * @n: input number
 *
 * Return: -1 if n is less than 0 otherwise factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
