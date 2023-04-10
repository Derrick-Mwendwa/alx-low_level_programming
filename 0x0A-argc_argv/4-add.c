#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds and print the result of positive numbers
 * @argc: no of argv
 * @argv: arguments
 *
 * Return: 0, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, n, sum = 0;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);

		if (n == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}

		if (n > 0)
			sum += n;
	}
	printf("%i\n", sum);
	return (0);
}
