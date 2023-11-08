#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to an allocated space in memory with S1/S2 contents
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *result;
	len1 = len2 = 0;
	if ( s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}
