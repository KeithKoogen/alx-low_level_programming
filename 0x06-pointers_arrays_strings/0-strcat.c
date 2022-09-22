#include "main.h"

/**
* _strcat - appends strings
* @dest: a destination string
* @src: a source string
* Return: A new String
*/

char *_strcat(char *dest, char *src)
{
int len_src;
int len_dest;
int i;
len_src = 0;
len_dest = 0;
while (dest[len_dest] != '\0')
len_dest++;

while (src[len_src] != '\0')
len_src++;

for (i = 0; i < len_src; i++)
dest[len_dest++] = src[i];

return (dest);
}
