#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string
 * Return: resulting string
 */

char *cap_string(char *s)
{
	int a, b;
	int trigger;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (a = 0, trigger = 0; s[a] != '\0'; a++)
	{
		if (s[0] > 96 && s[0] < 123)
			trigger = 1;
		for (b = 0; nots[b] != '\0'; b++)
		{
			if (nots[b] == s[a])
				trigger = 1;
		}

		if (trigger)
		{
			if (s[a] > 96 && s[a] < 123)
			{
				s[a] -= 32;
				trigger = 0;
			}
			else if (s[a] > 64 && s[a] < 91)
				trigger = 0;
			else if (s[a] > 47 && s[a] < 58)
				trigger = 0;
		}
	}
	return (s);
}
