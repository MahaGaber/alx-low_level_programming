#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 * @argc: accept integer number
 * @argv: pointer of character
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, add_num = 0;

	if (argc > 2)
	{
	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]) == 0)
		{
		printf("Error\n");
		return (1);
		}
		else
		{
		add_num += argv[i];
		}
	}
	printf("%d\n", add_num);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}


