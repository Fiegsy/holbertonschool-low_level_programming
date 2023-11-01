#include "main.h"
/**
 * Factorial - Returns the factorial of a number
 * @n: number to return the factorial
 *
 * Return: integer value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
