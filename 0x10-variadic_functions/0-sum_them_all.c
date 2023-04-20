#include "variadic_functions.h"
/**
 * sum_them_all - it prints SUM.
 * @n: numbers of elements
 * @...:integers
 *Return:integer
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	if (!n)
		return (0);

	va_start(args, n);

	for (i = 1; i <= n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}

