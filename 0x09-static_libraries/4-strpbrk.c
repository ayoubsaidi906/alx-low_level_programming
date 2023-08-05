#include "main.h"

/**
 * _strpbrk - locates the first occurrence of any character in the string
 * in the string s
 * @s: The string to search
 * @accept: The set of bytes to search
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
char *s_ptr;
char *accept_ptr;

for (s_ptr = s; *s_ptr != '\0'; s_ptr++)
{
for (accept_ptr = accept; *accept_ptr != '\0'; accept_ptr++)
{
if (*s_ptr == *accept_ptr)
return (s_ptr);
}
}
return ('\0');
}
