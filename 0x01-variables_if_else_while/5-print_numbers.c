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
    char i;

    for (i = '0'; i <= '9'; i++)
        putchar(i);

    putchar('\n');

    return (0);
}
