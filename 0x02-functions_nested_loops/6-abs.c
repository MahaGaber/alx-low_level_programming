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
int dig;

if (n > 0)
{
	dig = n;
	return (dig);
}
else if (n == 0)
{
	dig = n;
	return (dig);
}
else if (n < 0)
{
	dig = (-1) * n;
	return (dig);
}

}
