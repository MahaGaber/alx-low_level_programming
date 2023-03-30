#include"main.h"
/**
 * leet - it takes one integer argument
 * @a: accept pointer character
 *Return:character
 */

char *leet(char *a)
{
char key[] = {'A', 'E', 'O', 'T', 'L'};
char value[] = {4, 3, 0, 7, 1};
int j, i, temp;

for (i = 0; a[i]; i++)
{
	if (a[i] == key[i] || a[i] == key[i] + 32)
	{
		a[i] = 48 + value[i];
	}
	a[i] = a[i];
}

return (a);
}

