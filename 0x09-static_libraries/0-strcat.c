#include <stdio.h>
#include"main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: is punter
 * @src:is puntters
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

while (*ptr != '\0')
{
ptr++;
}

while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}


*ptr = '\0';

return (dest);
}
