#include "main.h"

/**
 * rev_string - reverses a string
 * @s: String to be reversed
 * Return: Void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char f;

	while (*s++)
	{
		j++;
	}
	for (i = j - 1; i >= j / 2; i--)
	{
		f = s[i];
		s[i] = s[i - j - 1];
		s[i - j - 1] = f;
	}
}
