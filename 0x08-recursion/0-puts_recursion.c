#include "main.h"

/**
 * _puts_recursion - outputs a string then a new line
 * @s: input string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');	
	}
}
