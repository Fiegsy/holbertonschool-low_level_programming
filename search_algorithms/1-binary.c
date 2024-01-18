#include "search_algos.h"

/**
 * print_array_range - Print a specific portion of an array
 *
 * @array: Array to print
 * @start: Starting index to print the value of
 * @end: Ending index to print the value of
 */
void print_array_range(int *array, size_t start, size_t end)
{
    size_t i;

    printf("Searching in array: ");
    for (i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
    }
    printf("\n");
}

/**
 * binary_search_recursive - Recursive helper function for binary search
 *
 * @array: Array to be searched
 * @left: Leftmost index of the current range
 * @right: Rightmost index of the current range
 * @value: Value to look for
 *
 * Return: The index of the value in the array, or -1 if not found
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
    size_t middle;

    if (left <= right)
    {
        middle = (left + right) / 2;
        print_array_range(array, left, right);

        if (array[middle] == value)
            return (int)middle;
        else if (array[middle] < value)
            return binary_search_recursive(array, middle + 1, right, value);
        else
            return binary_search_recursive(array, left, middle - 1, value);
    }

    return -1;
}

/**
 * binary_search - Search for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: Array to be searched
 * @size: Size of the array
 * @value: Value to look for
 *
 * Return: The index of the value in the array, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    return binary_search_recursive(array, 0, size - 1, value);
}
