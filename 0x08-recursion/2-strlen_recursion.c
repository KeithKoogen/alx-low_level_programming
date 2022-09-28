#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: a string
* Return: an integer
*/

int _strlen_recursion(char *s)
{
	
	int len;
	
	len = 0;
	
	if (*s == '\0')
	{
		return (len);
	}
	
	count++;
	_strlen_recursion(s + 1);
	
}
