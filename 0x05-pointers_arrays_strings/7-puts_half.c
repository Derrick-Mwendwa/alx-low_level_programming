#include "main.h"

/**
 * puts_half - prints last half of a string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n, len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	while (n < len)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
