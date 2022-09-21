#include "main.h"

/**
* _strncat - concat a string with n characters from source
* @dest: a string
* @src: a string
* @n: an integer number of characters to copy
*/

char *_strncat(char *dest, char *src, int n)
{
int length;
int i;
length = 0;
while (dest[length] != '\0') 
{
++length;
}

for (i = 0; i < n; i++)
dest[length + i] = src[i];

return (dest);
}
