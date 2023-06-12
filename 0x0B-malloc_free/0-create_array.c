#include "main.h"
/**
 * *create_array - creat an array
 * @size: size of the aray
 * @c: char to initialize
 * Return: pointer to the array or 0
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);
	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);
}

