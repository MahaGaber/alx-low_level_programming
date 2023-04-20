#include"function_pointers.h"
/**
 * print_name - it prints a name.
 * @name: pointer of character
 * @f: function pointer
 *Return:pointer void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

