#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - prints a string
 * followed by a new newline
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
}

/**
 * _atoi - converts a string to an int
 * @st: pointer to string
 *
 * Return: converted int
 */
int _atoi(const char *st)
{
	int sign = 1;
	unsigned long int resp = 0, first, j;

	for (first = 0; !(st[first] >= 48 && st[first] <= 57); first++)
		if (st[first] == '-')
			sign *= -1;

	for (j = first; st[j] >= 48 && st[j] <= 57; j++)
	{
		resp *= 10;
		resp += (st[j] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints an integer
 * @n: int
 * Return: void
 */

void print_int(unsigned long int n)
{
	unsigned long int divisor = 1;
	unsigned long int j, resp;

	for (j = 0; n / divisor > 9; j++, divisor *= 10)
		;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}

/**
 * main - returns the product of two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3 || !_atoi(argv[1]) || !_atoi(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
