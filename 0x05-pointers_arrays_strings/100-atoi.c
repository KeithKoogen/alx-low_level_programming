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
int count;
unsigned int integer;
int m;
integer = 0;
i = 0;
k = 1;
m = 0;
count = 0;
  
while (s[i] != '\0')
{
if (s[i] > 47 && s[i] <= 58)
{

if (s[i - 1] == 45)
{
m = -1;
}
else
{
m = 1;
}
j = i;
  
while(s[j] > 47 && s[j] < 58)
{

j++;
count++;
k = k * 10;
}

j = i;
  
while(s[j] > 47 && s[j] < 58)
{
integer = integer + (k * (s[j] - 48))
j++;
k = k / 10;

}


return (integer * m); 


}
i++;
}

return (integer * m);
}
