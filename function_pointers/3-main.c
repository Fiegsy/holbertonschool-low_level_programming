#include "3-calc.h"
/**
 * main - check arguments
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: error if number of arguments is wrong
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, res = 0;
	char s;

	if (argc != 4)
	{
		printf("Error:n");
		exit(98);
	}
