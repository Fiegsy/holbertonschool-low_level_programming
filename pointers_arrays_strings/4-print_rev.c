#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s:pointeur
 * Return: void
 */

void print_rev(char *s)

{
	int c = 0;
	int j = 0;

	while (s[c++])
	{
		j++;
	}

	for (c = j - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
