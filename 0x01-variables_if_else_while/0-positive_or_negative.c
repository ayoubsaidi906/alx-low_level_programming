#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints a sentence with proper grammar.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Random number: %d\n", n);

if (n > 0)
printf("is positive\n");

else if (n == 0)
printf("is zero\n");

else
printf("is negative\n");

return (0);
}