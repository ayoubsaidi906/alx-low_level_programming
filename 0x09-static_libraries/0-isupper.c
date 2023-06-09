#include "main.h"

/**
 * _isupper - checks if a charactr is uppercase or not
 * @c: character to be tested
 *
 * Return: 1 if thecharacter is uppercase, 0 otherwise and god look for me
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}

return (0);
}
