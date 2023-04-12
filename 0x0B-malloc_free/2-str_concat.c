#include"main.h"
/**
 * str_concat - it concatnate two string
 * @s1: pointer character
 * @s2: accept pointer character
 *Return:pointer character
 */

char *str_concat(char *s1, char *s2)
{
char *ptr;
int size_s1 = 0, size_s2 = 0, size = 0, i = 0;

if (s1 == NULL)
	s1 = "\0";
if (s2 == NULL)
	s2 = "\0";

while (s1[size_s1])
{
	size_s1++;
}

while (s2[size_s2])
{
	size_s2++;
}

size = size_s1 + size_s2;

ptr = malloc(size *sizeof(char) + 1);
if (ptr == NULL)
return (NULL);

for (i = 0; i <= size; i++)
{
	if (i < size_s1)
		ptr[i] = s1[i];
	else
		ptr[i] = s2[i - size_s1];
}
ptr[i] = '\0';
return (ptr);
}

