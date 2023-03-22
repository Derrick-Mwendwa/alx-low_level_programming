#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int j = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef / j);
	bef2 = (bef % j);
	aft1 = (aft / j);
	aft2 = (aft % j);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / j));
		printf("%lu", aft2 % j);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
