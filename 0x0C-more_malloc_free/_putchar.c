#include <unistd.h>
/**
 * _putchar - it allocates memory with byte
 * @c: character
 *Return:on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

