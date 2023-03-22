#include"main.h"
/**
 * times_table - it takes one integer argument
 *@n: integer number
 *
 *prints all natural numbers from n to 98, followed by a new line.
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
		_putchar(i);
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
	_putchar('\n');
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
		_putchar(i);
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
	_putchar('\n');
	}
}
