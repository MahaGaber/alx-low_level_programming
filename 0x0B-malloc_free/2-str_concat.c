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
int size_s1 = 0, size_s2 = 0, size = 0, i = 0, j = 0;

while (s1[size_s1])
{
	size_s1++;
}

while (s2[size_s2])
{
	size_s2++;
}

size = size_s1 + size_s2;

ptr = malloc(size_s1 * sizeof(*s1) + size_s2 * sizeof(*s2) + 1);
if (ptr == NULL)
return (NULL);

if (!s1[i])
	s1[i] = '\0';
if (!s2[i])
	s1[i] = '\0';
	
while (s1[i])
{
ptr[j] = s1[i];
i++;
j++;
}

i = 0;
while (s2[i])
{
ptr[j] = s2[i];
i++;
j++;
}

ptr[size] = '\0';

return (ptr);
}

