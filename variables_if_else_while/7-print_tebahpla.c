#include <stdio.h>
/**
 * main - prints alph in
 *
 * Return: (0)
 *
 */
int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
{	
	putchar (alphabets);
	alphabets--;
}
	putchar('\n');
	return (0);
}
