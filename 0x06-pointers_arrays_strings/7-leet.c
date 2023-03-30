#include <stdio.h>
#include"main.h"
/**
 * leet - it takes one integer argument
 * @c: accept pointer character
 *Return:character
 */

char *leet(char *c)
{
char *cp = c;
char key[] = {'A', 'E', 'O', 'T', 'L'};
char value[] = {4, 3, 0, 7, 1};
int j, i, temp;

while (*c)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
	if (*c == key[i] || *c == key[i] + 32)
	{
		*c = 48 + value[i];
	}
}
c++;
}
return (cp);
}

