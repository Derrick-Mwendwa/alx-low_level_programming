#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 * 10 times separated by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');

		i++;
	}
}
