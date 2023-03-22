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
			if (Mult_dig <= 9)
			{
				_putchar(Mult_dig + 48);
				_putchar(' ');
			}
			else
			{
				_putchar((Mult_dig / 10) + 48);
				_putchar((Mult_dig % 10) + 48);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
