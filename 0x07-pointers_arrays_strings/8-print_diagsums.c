#include"main.h"
#include <stdio.h>
/**
 * print_diagsums - it prints sum of two diagonals of square matrix
 * @a: accept pointer character
 * @size: accept integer number of array
 * *Return:
 */

void print_diagsums(int *a, int size)
{
int i, sum_diag_left, sum_diag_right;

sum_diag_left = 0, sum_diag_right = 0;

for (i = 0; i < size; i++)
{
	sum_diag_left += a[i];
	sum_diag_right += a[size - i - 1];
	a += size;
}
printf("%d, ", sum_diag_left);
printf("%d\n", sum_diag_right);
}


