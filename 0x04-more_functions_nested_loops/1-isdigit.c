#include "main.h"
/**
* int _isdigit - checks for a digit
* @c: A given character
* Return: 1 if c is a digit else 0
*/
int _isdigit(int c)
{
if ((c > 47) && (c < 58))
{
return (1);
}
else
{
return (0);
}
}
