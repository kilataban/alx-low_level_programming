#include "function_pointers.h"

/**
 * array_iterator - Executes function given as parameter on each array element
 *
 * @array: array
 * @size: size of the array
 * @action: pointer to executed function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
