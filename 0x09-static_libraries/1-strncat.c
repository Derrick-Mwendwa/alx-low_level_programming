#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: char string type pointer
 * @src: char string type to concatenate
 * @n: int type to concatenates
 * Return: resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
