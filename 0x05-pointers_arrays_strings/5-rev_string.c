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
len = 0;
while (s[len] != '\0')
{
len++;
}



for (i = 0; i < len / 2; i++)
{
tmp = s[len - i - 1];
s[len - i - 1] = s[i];
s[i] = tmp;

}


}
