#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: a character int value
* Return: Integer 1 is uppercase else 0
*/
int _isupper(int c)
{
if ((c > 64) && (c < 91))
{
return (1);
}
else
{
return (0);
}
}
