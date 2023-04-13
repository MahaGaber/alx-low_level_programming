#include"main.h"
/**
 * string_nconcat - it concatnate two string
 * @s1: pointer character
 * @s2: accept pointer character
 * @n: integer number
 *Return:pointer character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int size_s1 = 0, size_s2 = 0, size = 0, i = 0, j = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

while (s1[size_s1])
	size_s1++;

while (s2[size_s2])
	size_s2++;

if (n >= size_s2)
	n = size_s2;

size = size_s1 + n;
ptr = malloc(sizeof(char) * size + 1);
if (ptr == NULL)
	return (NULL);

while (s1[i])
{
ptr[j] = s1[i];
i++;
j++;
}
for (i = 0; i <= n; i++, j++)
	ptr[j] = s2[i];

ptr[j] = '\0';
return (ptr);
}

