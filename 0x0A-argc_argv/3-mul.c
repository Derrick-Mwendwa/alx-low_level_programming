#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: no of argv
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if ((argc - 1) != 2)
	{

		printf("Error\n");
		return (0);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
