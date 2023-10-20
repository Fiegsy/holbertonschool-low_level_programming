#include <unistd.h>

/**
 * _putchar write the caracter
 * to print
 * Return: success 1
 * While on error, -1 is returned
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
