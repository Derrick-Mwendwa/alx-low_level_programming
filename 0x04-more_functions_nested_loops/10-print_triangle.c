#include "main.h"

/**
 * print_triangle - outputs a triangle of given size
 * @size: input size
 *
 * Return: void
 */
void print_triangle(int size)
{
	int r, h, s;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = size - r; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
