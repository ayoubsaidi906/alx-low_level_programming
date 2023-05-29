#include "main.h"
#include <stdio.h>
/**
 * _strlen - is function thet retourn the length of a string
 * @_strlen : char
 * @l: uvjhbkbjjbh
 * Return : to l
 */

int _strlen(char *s)
{
int l = 0;

if (s != 0)
{
while (*s != '\0')
{
l++;
s++;
}
}

return (l);
}
