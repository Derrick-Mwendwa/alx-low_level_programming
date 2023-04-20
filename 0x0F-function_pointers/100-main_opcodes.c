#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, m;
	char *n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	n = (char *)main;

	for (m = 0; m < bytes; m++)
	{
		if (m == bytes - 1)
		{
			printf("%02hhx\n", n[m]);
			break;
		}
		printf("%02hhx ", n[m]);
	}
	return (0);
}
