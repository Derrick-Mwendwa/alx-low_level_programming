#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	x = 0;
	for (y = 9; y > 0; y--)
	{
		z = x;
		while (z < 9)
		{
			putchar(x + '0');
			putchar((z + 1) + '0');
			z++;
			if (x != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		x++;
	}
	putchar('\n');

	return (0);
}
