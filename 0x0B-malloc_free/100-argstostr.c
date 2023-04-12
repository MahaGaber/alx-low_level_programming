#include"main.h"
/**
 * _strlen - it
 * @s: integer number
 *Return: integer
 */
int _strlen(char *s)
{
int size;
	for (size = 0; s[size] != '\0'; size++)
		;
return (size);
}
/**
 * argstostr - it 2 dimensional array of integers
 * @ac: integer number
 * @av: integer number
 *Return:pointer character
 */

char *argstostr(int ac, char **av)
{
int i, nc = 0, j = 0, cmpt = 0;
char *s;

if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];

		s[cmpt] = '\n';
		cmpt++
	}
s[cmpt] = '\0';
return (s);
}

