#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of 0 and 1s
 *
 * Return: converted number or 0 if b is NULL or contains chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int n = 0, x = 1;
    int length;

    if (b == '\0')
        return (0);

    for (length = 0; b[length];)
        length++;

    for (length -= 1; length >= 0; length--)
    {
        if (b[length] != '0' && b[length] != '1')
            return (0);
        n += (b[length] - '0') * x;
        x *= 2;
    }

    return (n);
}