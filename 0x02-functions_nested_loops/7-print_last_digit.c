#include "main.h"

/**
 * print_last_digit - prints last digit of n
 * @n: input number
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	_putchar(last_digit + 48);

	return (last_digit);
}
