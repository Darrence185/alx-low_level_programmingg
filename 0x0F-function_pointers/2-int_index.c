#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - search for an integer in an array of ints.
 *@array: pointer to array of type int
 *@size: type int
 *@cmp: function pointer
 *Return: index of first element where cmp != 0, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, cmp_h = 0, count = 0;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		cmp_h = cmp(array[i]);
		if (cmp_h != 0)
			return (i);
		count++;
	}
	if (size == count)
		return (-1);
	return (0);
}
