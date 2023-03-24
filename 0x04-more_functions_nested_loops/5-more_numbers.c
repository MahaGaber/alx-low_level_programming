#include"main.h"
/**
 * more_numbers - it takes two integer argument
 *
 *Return: print numbers 0 .. 9
 */

void more_numbers(void)
{
	int i, j, num1, num2;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
	{
		if (i <= 9)
		{
		_putchar(i + 48);
		}
		else
		{
			num1 = (i / 10);
			num2 = (i % 10);
			_putchar(num1 + 48);
			_putchar(num2 + 48);
		}
	}
	_putchar('\n');
	}
}
