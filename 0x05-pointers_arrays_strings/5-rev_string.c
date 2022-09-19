#include "main.h"

/**
* rev_string - reverses a string
* @s: a string
*/

void rev_string(char *s)
{
int i;
int len;
char tmp;
i = 0;
len = _strlen(s);



for (i = 0; i < len; i++)
{
tmp = s[len - i];
s[len - i] = s[i]; 
s[i] = tmp;

}


}
