#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: Strings
 * @f: Function pointer
 * Return: (0)
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
