#include <stdio.h>

void __attribute__((constructor)) before_main(void);

/**
 * before_main - prints a string
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
