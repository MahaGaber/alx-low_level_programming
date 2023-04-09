#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * @argc: accept integer number
 * @argv: pointer of character
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int multiply;

	if (argc == 3)
	{
		multiply = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiply);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

