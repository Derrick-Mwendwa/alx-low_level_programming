#include "main.h"

/**
 * _isalpha - checks if c is an alphabet
 * @c: the char we are checking
 *
 * Return: 1 if is alpha otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
