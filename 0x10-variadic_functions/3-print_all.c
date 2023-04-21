#include "variadic_functions.h"
/**
 * format_string - it format
 * @separator: string separator
 * @ap:pointer
 *Return:
 */

void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	printf("%s%s", separator, str ? str : "(nil)");
}

/**
 * format_char - it format
 * @separator: string separator
 * @ap:pointer
 *Return:
 */

void format_char(char *separator, va_list ap)
{
	char ch = va_arg(ap, int);

	printf("%s%c", separator, ch);
}

/**
 * format_float - it format
 * @separator: string separator
 * @ap:pointer
 *Return:
 */

void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));

}

/**
 * format_int - it format
 * @separator: string separator
 * @ap:pointer
 *Return:
 */

void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * print_all - it prints anything.
 * @format: list of types of arguments
 * @...:arguments
 *Return:
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator;
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

va_start(ap, format);
		separator = "";
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
		j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

