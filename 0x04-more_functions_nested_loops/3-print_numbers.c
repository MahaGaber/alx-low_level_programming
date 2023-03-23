#include"main.h"
/**
 * print_numbers - it takes two integer argument
 *
 *Return: print numbers 0 .. 9
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');

}
