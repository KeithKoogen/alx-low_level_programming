#include "main.h"

/**
* _atoi - converts numbersin a string
* @s: a string
*/

int _atoi(char *s)
{
int j;
int i;
int k;
int integer;
integer = 0;
i = 0;
k = 0;
  
while (s[i] != '\0')
{
if (s[i] > 47 && s[i] <= 58)
{

if (s[i - 1] == 45)
{
k = -1;
}
else
{
k = 1;
}
j = i;
while(s[j] > 47 && s[j] < 58)
{
if (j > 1 && s[j] == 48)
{
s[j] = 49; 
}
integer = integer + ((s[j] - 48) * k);
j++;
k = k * 10;
}

return (integer); 


}
i++;
}

return (integer);
}
