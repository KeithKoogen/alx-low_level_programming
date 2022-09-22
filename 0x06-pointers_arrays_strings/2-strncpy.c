#include "main.h"

/**
* _strncpy - copies a string with n value if greater than padded with null
* @dest: the destination string
* @src: the source string
* @n: an integer
* Return: returns a pointer to copy of a string
*/

char *_strncpy(char *dest, char *src, int n)
{
int length;
int i;
length = 0;

while (src[length] != '\0')
{
++length;
}

for (i = 0; i < n; i++)
{
if (i <= length)
{
dest[length++] = src[i];
}
else
{
dest[length++] = '\0';
}
}
return (dest);
}
