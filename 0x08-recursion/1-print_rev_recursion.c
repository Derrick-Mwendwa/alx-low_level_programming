#include "main.h"

/**
 * _print_rev_recursion - outputs reversed string
 * @s: input string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
