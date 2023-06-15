#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocate memry using malloc and exit if faild
 * @b: intger
 * Return: pointer to the initilizd or null
 */

void *malloc_checked(unsigned int b)
{
	void *f = malloc(b);

	if (f == NULL)
	{
		exit(98);
	}
	return (f);
}
