#include"main.h"
/**
 * string_toupper - it takes one pointer character argument
 * @s: accept pointer character
 *Return:pointer character
 */

char *string_toupper(char *s)
{
int  i;
int delt = 'a' - 'A';

for (i = 0; s[i]; i++)
{
	if (s[i] >= 'a' && s[i] <= 'z')
	s[i] -= delt;
}

return (s);
}

