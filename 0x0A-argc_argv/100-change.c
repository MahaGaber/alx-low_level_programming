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
	int i, change_cents = 0, coins;
	int coins_value[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
	coins = atoi(argv[1]);
		if (coins > 0)
		{
			for (i = 0; i < 5; i++)
			{
				if (coins >= coins_value[i])
				{
				change_cents += coins / coins_value[i];
				coins = coins % coins_value[i];
				if (coins % coins_value[i] == 0)
					break;
				}
			}
			printf("%d\n", change_cents);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}


