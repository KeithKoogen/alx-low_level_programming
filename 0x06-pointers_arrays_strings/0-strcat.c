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
len_dest = sizeof(dest) / sizeof(char);
char joined[len_src + len_dest - 1];

for (i = 0; i < len_dest - 1; i++)
joined[i] = dest[i];

for (i = len_dest - 1; i < len_src + len_dest - 1; i++);
joined[i] = len_src[i - len_dest - 1];

return (joined);
}
