#include"main.h"
/**
 * print_most_numbers - it takes two integer argument
 *
 *Return: print numbers 0 .. 9
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
		_putchar(i + 48);
		}
	}
	_putchar('\n');

}
