#include "main.h"

/**
 * cap_string - Capitalizes every words of the string
 * @str: the string to be cap
 * Return: The pointer to the string that changed
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while(.(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index - 1] == '' || str[index - 1] == '\t' || str[index - 1] == '\n' ||