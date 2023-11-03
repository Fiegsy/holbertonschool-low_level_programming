#include <stdio.h>
/**
 * main - print all arguments it receive
 * @argc: number of line arg
 * @argv: array that contains the program command line
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
} 
