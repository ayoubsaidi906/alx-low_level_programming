#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times.
 */
void print_alphabet_x10(void)
{
char l;
int d;

for (d = 0; d < 10; d++)
{
l = 'a';

while (l <= 'z')
{
_putchar(l);
l++;
}

_putchar('\n');
}
}
