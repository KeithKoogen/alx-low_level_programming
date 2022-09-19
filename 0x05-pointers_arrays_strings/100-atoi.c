#include "main.h"
/**
* _atoi - converts numbersin a string
* @s: a string
* Return: integer
*/

int _atoi(char *s)
{
int j, i, k, count, m, x;
int integer;
integer = 0;
i = 0;
k, m = 1;
count = 0;
while (s[i] != '\0')
{
if (s[i] > 47 && s[i] < 58)
{
for (x = 0; x < i; x++)
{
if (s[x] == '-')
{
m = m * -1;
}
}
j = i;
while (s[j] > 47 && s[j] < 58)
{
j++;
count++;
k = k * 10;
}
j = i;
while (s[j] > 47 && s[j] < 58)
{
k = k / 10;
integer = integer + (k * (s[j] - 48));
j++;
}
integer = integer *m;
return (integer);
}
i++;
}
return (integer);
}
