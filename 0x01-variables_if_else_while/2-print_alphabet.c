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
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);  // Print each character
}

putchar('\n');  // Print a new line

return (0);
}
