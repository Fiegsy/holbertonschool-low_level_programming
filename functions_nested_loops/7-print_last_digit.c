#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: the passed argument
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
