#include "main.h"

/**
* _atoi - converts numbersin a string
* @s: a string
*/

int _atoi(char *s)
{
int i;
int j;
int k;
int integer;
integer = 0;
i = 0;
  
while (s[i] != '\0')
{
if (s[i] >= 48 && s[i] <= 57)
{
k = 1;
if (s[i - 1] == 45)
{
j = 1;
}
else
{
j = 0;
}

while(s[i] >= 48 && s[i] <= 57)
{
integer = integer + (s[i] * k);
i++;
k *= 10;
}
if ( j == 1)
{
return (-integer); 
}
else
{
return (integer);
}

}
i++;
}

return (integer);
}
