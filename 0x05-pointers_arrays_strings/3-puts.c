#include"main.h"
/**
 * _puts - it takes one integer argument
 * @str: accept pointer character
 *
 *Return:
 */

void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str + 0);
	str++;
}
	_putchar('\n');
}

