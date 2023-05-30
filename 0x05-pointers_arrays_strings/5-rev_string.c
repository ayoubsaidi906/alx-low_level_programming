#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int x = 0, i;
	char tmp;

	while (*(s + x) != '\0')
	{
		x++;
	}
	for (i = 0; i < x / 2; i++)
	{
		tmp = s[i];
		s[i] = s[x - i  - 1];
		s[x - i - 1] = tmp;
	}
}
