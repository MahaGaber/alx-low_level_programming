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
int abs_dig;

if (n > 0)
{
	abs_dig = n;
	return (abs_dig);
}
else if (n == 0)
{
	abs_dig = n;
	return (abs_dig);
}
else if (n < 0)
{
	abs_dig = -n;
	return (abs_dig);
}

}
