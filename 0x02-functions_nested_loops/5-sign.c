#include "main.h"

/**
 * print_sign - prints the sign of n
 * @n: input number
 *
 * Return: 1 if n > 0, 0 if n is o otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
