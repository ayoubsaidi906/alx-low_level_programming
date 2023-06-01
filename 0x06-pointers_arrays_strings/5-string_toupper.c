#include <ctype.h>
#include"main.h"
/**
 * string_toupper - function that changes all lowercase letters of a string
 * @str: puinter to thestring
 * Return: poimnter to the modified
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (islower(*ptr))
*ptr = toupper(*ptr);
ptr++;
}

return (str);
}
