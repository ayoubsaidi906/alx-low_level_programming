#include "main.h"
#include <stdio.h>
/**
 * print_sign - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if @n is lowercase, 0 otherwise.
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
if else (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
