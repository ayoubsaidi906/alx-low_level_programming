#include <ctype.h>
/**
 * cap_string - function
 * @str: array to compart
 * Return:str
 */

char *cap_string(char *str)
{
int i, capitalize_next;

capitalize_next = 1;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
{
capitalize_next = 1;
}    
else if (capitalize_next && islower(str[i]))
{
str[i] = toupper(str[i]);
capitalize_next = 0;
}
}

return (str);
}
