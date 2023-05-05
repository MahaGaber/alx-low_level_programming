#include"main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: pointer
 *Return: integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec_num = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	dec_num = dec_num * 2 + (b[i] - '0');
	i++;
	}
	return (dec_num);
}



