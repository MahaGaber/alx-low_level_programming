#include"main.h"
/**
 * more_numbers - it takes two integer argument
 *
 *Return: print numbers 0 .. 9
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
	{
		if (i <= 9)
		{
		_putchar(i + 48);
		}
		else
		{
		_putchar((i / 10) + 48);
		_putchar((i % 10) + 48);
		}
	}
	_putchar('\n');
	}
}
