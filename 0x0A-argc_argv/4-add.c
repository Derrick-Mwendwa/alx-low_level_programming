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
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
