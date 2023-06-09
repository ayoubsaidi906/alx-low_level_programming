#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: Integer
 * @size: is the size of the array
 * @action: is a pointer to the function you need to u
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!(array) || !(action))
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
