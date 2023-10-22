#include "main.h"

/**
 * print_sign -> print sign based on condition
 * @n: argument passed
 *
 * Return: (0) or (1) depending
 */

int print_sign(int n)
{
	int negative = -1;
	char ch = (char) negative;

	if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (ch);
}
