#include "main.h"

/**
 * put_string - its function that print a string
 * @str: string
 * Return: c
 */
int pu_s(const char *str)
{
	int c = 0;

	if (str == NULL)
	{
		pu_s("(null)");
		return (6);
	}
	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c++;
	}
	return (c);
}
