#include <stdio.h>
/**
 * main - prints the name followed by a new line
 *
 * @argc: number of command line arguments
 * @argv: an array that contains the command line argument
 * Return: (0)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
