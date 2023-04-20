#include "variadic_functions.h"
/**
 * print_numbers - it prints numbers, followed by a new line.
 * @separator:seprator between numbers
 * @n: numbers of elements
 * @...:integers
 *Return:
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list args;

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		if (separator == NULL)
		printf("%d", va_arg(args, int));
		else
		{
		if (i == n)
			separator = "";
		printf("%d%s", va_arg(args, int), separator);
		}
	}
	printf("\n");
	va_end(args);
}

