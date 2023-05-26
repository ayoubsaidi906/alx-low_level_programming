#include "main.h"

/**
 * _isdigit - checks if a _isdigit or not
 * @c: digit to be tested
 *
 * Return: 1 if thecharacter is digit, 0 otherwise and god look for me
 */

int _isdigit(int c)
{
if ((c > 0) && (c < 9))
{
return (1);
}

return (0);
}
