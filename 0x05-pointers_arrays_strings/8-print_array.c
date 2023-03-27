#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array to be printed
 * @n: number of items to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, j;

	j = 0;

	for (i = n; i > 0; i--)
	{
		if (i > 1)
			printf("%i, ", *(a + j));
		else
			printf("%i", *(a + j));
		j++;
	}
	printf("\n");
}
