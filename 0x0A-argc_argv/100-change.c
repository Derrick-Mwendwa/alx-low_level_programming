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
	int ct, n = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	ct = atoi(argv[1]);

	while (ct > 0)
	{
		n++;
		if ((ct - 25) >= 0)
		{
			ct -= 25;
			continue;
		}
		if ((ct - 10) >= 0)
		{
			ct -= 10;
			continue;
		}
		if ((ct - 5) >= 0)
		{
			ct -= 5;
			continue;
		}
		if ((ct - 2) >= 0)
		{
			ct -= 2;
			continue;
		}
		ct--;
	}
	printf("%d\n", n);
	return (0);
}
