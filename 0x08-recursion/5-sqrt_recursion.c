#include"main.h"
/**
 * ayoub - for sqrt
 * @a: int
 * @b: int
 * Return: integer
 */
int ayoub(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a == b / 2)
		return (-1);
	else
		return (ayoub((a + 1), b));
}

/**
 * _sqrt_recursion - function is a recursive function that calculates the squa
 * root
 * @n: intiger
 * Return: notings
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if ((n == 0) || (n == 1))
		return (n);
	else
		return (ayoub(0, n));
}
