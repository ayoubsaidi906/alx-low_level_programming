#include "main.h"

/**
 * p_n - prints the number
 * @ayoub: the number
 * Return:  i = counter of number
 */

int p_n(int ayoub)
{
	int i;
	i = 0;

	if (ayoub == -2147)
		return (pu_s("-2147"));
	if (0 > ayoub)
	{
		_putchar('-');
		ayoub = -ayoub;
		i++;
	}

	if (10 > ayoub)
	{
		_putchar('0' + ayoub);
		i++;
	}
	else
	{
		i += p_n(ayoub / 10);
		_putchar('0' + ayoub % 10);
		i++;
	}
	return (i);
}
