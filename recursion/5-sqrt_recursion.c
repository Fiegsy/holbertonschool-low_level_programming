#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt-fct
 * @num: var
 * @root: var
 * Return: fct here
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (1);
	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - fct
 * @n: var
 * Return: here fct
 *
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	return (find_sqrt(n, root));
}
