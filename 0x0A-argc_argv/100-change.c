#include <stdio.h>
#include <stdlib.h>

/**
 * main - outputs least  number of coins
 * @argc: no of argv
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	size_t i;
	int cents, coins = 0;
	int available[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	for (i = 0; i < sizeof(available) / sizeof(available[0]); i++)
	{
		coins += cents / available[i];
		cents %= available[i];
	}

	printf("%d\n", coins);
	return (0);
}
