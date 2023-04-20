#include "variadic_functions.h"
/**
 * print_strings - it prints strings, followed by a new line.
 * @separator:seprator between numbers
 * @n: numbers of elements
 * @...:strings
 *Return:
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
	str = va_arg(args, char *);
	if (separator == NULL)
		printf("%s", str ? str : "(nil)");
		else
		{
		if (i == n)
			separator = "";
		printf("%s%s", str ? str : "(nil)", separator);
		}
	}
	printf("\n");
	va_end(args);
}

