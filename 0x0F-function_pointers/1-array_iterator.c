#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - execute function pointer on each element of array
 *@array: pointer to array of type int
 *@size: type size_t
 *@action: function pointer
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action || size <= 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
