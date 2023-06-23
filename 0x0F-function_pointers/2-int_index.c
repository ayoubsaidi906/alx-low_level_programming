#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of elemnts
 * @size: number of elements in the array
 * @cmp: is a pointer to the fnction to be used to compare value
 * Return: index first element cmp function does not return 0
 */



int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
			{
				return (a);
			}
		}
	}
	return (-1);
}
