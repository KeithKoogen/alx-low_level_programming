#include "main.h"
/**
* _atoi - converts numbersin a string
* @s: a string
* Return: integer
*/

int _atoi(char *s)
{
int j, i, k, m, x, r;
unsigned int integerx;
integerx = 0;
i = 0;
k = 1;
m = 1;
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
k = k * 10;
}
j = i;
while (s[j] > 47 && s[j] < 58)
{
k = k / 10;
r = (s[j] - 48) * k;
integerx = integerx + r;
j++;
}
return (integerx *m);
}
i++;
}
return (integerx);
}
