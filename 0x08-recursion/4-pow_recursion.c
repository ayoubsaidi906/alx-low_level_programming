#include"main.h"
/**
 * _pow_recursion - function that returns the value of x to pow y
 * @x: intger
 * @y: integr
 * Return: no tjings
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
