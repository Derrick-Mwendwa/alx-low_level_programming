/**
 * _memset - fills memory with a constant byte
 * @s: memory address
 * @b: byte
 * @n: number of bytes after address
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
