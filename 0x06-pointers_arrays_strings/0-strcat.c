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
len_src = sizeof(src) / sizeof(char);
len_dest = 0;
while (dest[len_dest] != '\0')
len_dest++;


for (i = 0; i < len_src - 1; i++)
dest[len_dest + i - 1] = src[i];

return (dest);
}
