#include "main.h"

/**
 * rev_string - reverses a string
 * @s: String to be reversed 
 */

void rev_string(char *s)
{
	int j = 0;
	int i = 0;
	char f;

	while (s[i++])
		j++;

	for (i = j - 1; i >= j / 2; i--)
	{
		f = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = f;
	}
}
