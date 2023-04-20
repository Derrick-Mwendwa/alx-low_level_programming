/**
 * print_name - print name
 * @name: name
 * @f: pointer to the function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
