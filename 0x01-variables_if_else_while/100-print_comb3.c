#include <stdio.h>
/**
 * main - entre point of programme
 *
 * descreption: thes programme Write a program that prints all possible differ
 *
 * return : 0 always (Succes)
 */

int main(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);

if (i < 9 || j < 8)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
