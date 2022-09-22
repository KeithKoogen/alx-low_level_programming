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
int dest_length;
length = 0;
dest_length = 0;
while (src[length] != '\0')
{
++length;
}

while (dest[dest_length] != '\0')
{
++dest_length;
}

for (i = 0; i < n; i++)
{
if (i < length)
{
dest[dest_length++] = src[i];
}
else
{
dest[dest_length++] = '\0';
}
}
return (dest);
}
