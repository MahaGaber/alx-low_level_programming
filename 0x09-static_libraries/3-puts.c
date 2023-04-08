#include"main.h"
/**
 * _puts - it takes one integer argument
 * @s: accept pointer character
 *
 *Return:
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
{
	if (i % 2 == 0)
	_putchar(s[i]);
}
	_putchar('\n');
}

