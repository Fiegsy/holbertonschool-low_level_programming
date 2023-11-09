#include "main.h"
/**
 * calloc - allocates memory for an array of @nmemb elements
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	d = malloc(nmemb * size);
	if (d == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		d[b] = 0;
	return (d);
}
