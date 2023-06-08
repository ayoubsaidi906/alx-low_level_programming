#include "main.h"
/**
 * _print_rev_recursion - print in rev
 * @s: char
 * Return: no things
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
