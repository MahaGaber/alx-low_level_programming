#include"main.h"
/**
 * print_rev - it takes one integer argument
 * @s: accept pointer character
 *
 *Return:
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (int j = i; j <= 0; j--)
	{
	_putchar(s[i] + 0);
	}
	_putchar('\n');
}

