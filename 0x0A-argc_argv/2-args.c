#include<stdio.h>
/**
 * main - Entry point
 * @argc: accept integer number
 * @argv: pointer of character
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int count;
	
	count = argc - 1;
	printf("%d\n", count);

	return (0);
}

