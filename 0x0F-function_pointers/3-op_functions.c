#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum
 * @i: first integer
 * @j: second integer
 *
 * Return: sum
 */
int op_add(int i, int j)
{
	return (i + j);
}

/**
 * op_sub - return the difference
 * @x: first integer
 * @y: second integer
 *
 * Return: difference
 */
int op_sub(int x, int y)
{
	return (x - y);
}

/**
 * op_mul - returns the product
 * @p: first integer
 * @q: second integer
 *
 * Return: product
 */
int op_mul(int p, int q)
{
	return (p * q);
}

/**
 * op_div - return the division
 * @m: first integer
 * @n: second integer
 *
 * Return: division
 */
int op_div(int m, int n)
{
	if (n == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (m / n);
}

/**
 * op_mod - return the remainder of the division
 * @r: first integer
 * @s: second integer
 *
 * Return: remainder of the division
 */
int op_mod(int r, int s)
{
	if (s == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (r % s);
}
