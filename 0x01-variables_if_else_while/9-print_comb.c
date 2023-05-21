#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');

if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
