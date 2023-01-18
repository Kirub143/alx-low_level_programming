#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter-each element of array.
 * @array: array to iterator
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
