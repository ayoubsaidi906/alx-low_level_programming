#include <stdlib.h>
/**
 * _calloc - conncated tow strings
 * @size: intger
 * @nmemb: intger
 * Return: nothings
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(nmemb * size);
	if (!p)
		return (0);
	for (b = 0; b < (nmemb * size); b++)
		*(p + b) = 0;
	return (p);
}
