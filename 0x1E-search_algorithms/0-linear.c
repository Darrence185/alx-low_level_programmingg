#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *		   using the linear search algorithm.
 *
 * @array: A pointer to the first element of the array to search.
 * @size: Number of elements in @array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located
 *	   -1 if value is not present or if array == NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; ++index)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
	