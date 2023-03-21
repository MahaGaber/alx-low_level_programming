#include"main.h"
/**
 * print_sign - it takes one integer argument
 * @n: checks integer number sign of a number
 *
 *
 *Return: on success 1.or 0 or -1
 */
int print_sign(int n)
{
if (n > 0)
{	_putchar('+');
	return (1);
}
else if (n == 0)
{	_putchar('0');
	return (0);
}
else
{	_putchar('-');
	return (-1);
}

}
