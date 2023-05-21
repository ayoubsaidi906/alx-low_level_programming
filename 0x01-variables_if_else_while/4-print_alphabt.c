#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints a sentence with proper grammar.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
}

putchar('\n');

return (0);
}
