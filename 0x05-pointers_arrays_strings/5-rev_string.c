#include"main.h"
/**
 * rev_string - it takes one integer argument
 * @s: accept pointer character
 *
 *Return:
 */

void rev_string(char *s);
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}

