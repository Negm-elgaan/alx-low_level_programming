#include "function_pointers.h"
/**
 * array_iterator - function to return numbers
 *
 * @array: parameter to be changed
 *
 * @size: parameter to be changed
 *
 * @action: parameter to be changed
 *
 * Return: nothing
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
