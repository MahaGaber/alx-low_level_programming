#include"main.h"
/**
 * _printInt - it print
 * @number: accept pointer of character
 *Return:
 */

void _printInt(unsigned long int number)
{
	unsigned long int i, divide = 1, digits;

	for (i = 0; number / divide > 9; i++, divide *= 10)
	;

	for (; divide >= 1; number %= divide, divide /= 10)
	{
	digits = number / divide;
	_putchar('0' + digits);
	}
}
/**
 * _put - it print
 * @src: accept pointer of character
 *Return:
 */

void _put(char *src)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
}

/**
 * _atoi - convert from string to integer
 * @str: accept pointer of character
 *Return:integer
 */

int _atoi(char *str)
{
	unsigned long int i, j, digits;
	int sign = 1;

	for (j = 0; !(str[j] >= 48 && str[j] <= 57); j++)
	{
		if (str[j] == '-')
		{
		sign *= -1;
		}
	}

	for (i = j; str[i] >= 48 && str[i] <= 57; j++)
	{
		digits *= 10;
		digits += str[i] - 48;
	}
	return (sign * digits);
}

/**
 * main - Entry point
 * @argc: accept integer number
 * @argv: pointer of character
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned long int multiply;

	if (argc == 3)
	{
		multiply = _atoi(argv[1]) * _atoi(argv[2]);
		_printInt(multiply);
		_putchar('\n');
	}
	else
	{
		_put("Error ");
		exit(98);
	}

	return (0);
}

