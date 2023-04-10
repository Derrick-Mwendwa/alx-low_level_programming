#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: char string type pointer
 * @src: char string type to copy
 * @n: int type
 * Return: resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (; n > a; a++)
		dest[a] = '\0';

	return (dest);
}
