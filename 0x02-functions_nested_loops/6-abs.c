#include"main.h"
/**
 * _abs - it takes one integer argument
 * @n: checks integer number
 *
 *
 *Return: on success absoulte value
 */
int _abs(int n)
{
if (n > 0)
{
	return (n);
}
else if (n == 0)
{
	return (0);
}
else if (n < 0)
{
	n = (-1) * n;
	return (n);
}

}
