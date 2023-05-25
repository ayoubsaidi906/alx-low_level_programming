#include "main.h"
/**
 * print_last_digit - Checks if a character is lowercase.
 * @n: The character to be checked.
 *
 * Return: -n if @n is lowercase, 0 otherwise.
 */
int print_last_digit(int n)
{
int i;
i = n % 10;
_putchar(i);
return (i);
}
