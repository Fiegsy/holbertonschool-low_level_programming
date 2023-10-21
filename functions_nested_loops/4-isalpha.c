#include "main.h"

/**
 * _isalpha - Checks for alphabetic letters
 * @c: The character to be checked
 * Return: 1 or 0 depending the context
 */

int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
