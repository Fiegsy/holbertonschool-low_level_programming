#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return the sum of the numbers
 * @a: the first num
 * @b: the second num
 *
 * Return: return the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return the difference of the numbers
 * @a: the first num
 * @b: the second num
 *
 * Return: return the difference of the numbers
 */
int op_sub(int a, int b)
{
	return (a -b);
}
/**
 * op_mul - return the product of the numbers
 * @a: the first num
 * @b: the second num
 *
 * Return: return the product of the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return the division of the numbers
 * @a: the first num
 * @b: the second num
 *
 * Return: return the division of the numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return the remainder of the numbers
 * @a: the first num
 * @b: the second num
 *
 * Return: return the remainder of the numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
