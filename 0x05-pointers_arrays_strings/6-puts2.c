#include"main.h"
/**
 * puts2 - it takes one integer argument
 * @str: accept pointer character
 *
 *Return:
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
{
	if (i % 2 == 0)
	_putchar(str[i]);
}
	_putchar('\n');
}

