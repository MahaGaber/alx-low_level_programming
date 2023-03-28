#include"main.h"
/**
 * puts_half - it takes one integer argument
 * @str: accept pointer character
 *
 *Return:
 */

void puts_half(char *str)
{
	int n, i;
	int counter;

for (counter = 1; *str != '\0'; str++)
	counter++;

if (counter % 2 == 0)
	n = counter / 2;
else
	n = (counter - 1) / 2;

for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

