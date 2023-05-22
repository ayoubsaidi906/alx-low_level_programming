#include <stdio.h>
/**
 * main - entre point of programme
 *
 * descreption: thes programme Write a program that prints all possible differ
 *
 * return : 0 always (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i <= 8; i++)
{

for (j = 1 + i; j <= 9; j++)
{

putchar('0' + i)
putchar('0' + j)
{

if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}

if (j == 9)
{
i++;
i + j;
}
}
}
return (0);
}
