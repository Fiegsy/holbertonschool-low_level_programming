#include "search_algos.h"

/**
 * linear_search - Search a value in an array of integers using linear search
 * algorithm
 *
 * @array: Array to be searched
 * @size: Size of the array
 * @value: Value to look for
 *
 * Return: The index of value in the array, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        if (array[i] == value)
            return (int) (i);
    }

    return (-1);
}

