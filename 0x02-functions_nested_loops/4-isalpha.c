#include "main.h"
/**
 * _isalpha - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if @c is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
