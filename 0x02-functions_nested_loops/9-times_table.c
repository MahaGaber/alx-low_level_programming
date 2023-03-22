#include"main.h"
/**
 * times_table - it takes one integer argument
 *
 *
 *print 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, Mult_dig;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			Mult_dig = i * j;
			_putchar(Mult_dig);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');

	}
}
