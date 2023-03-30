#include"main.h"
/**
 * reverse_array - it takes one integer argument
 * @a: accept pointer character
 * @n:accept pointer character
 *Return:
 */

void reverse_array(int *a, int n)
{
int j, i, temp;

for (i = 0, j = n - 1; i < j; i++, j--)
{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

}

