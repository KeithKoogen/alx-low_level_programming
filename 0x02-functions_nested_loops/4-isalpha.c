#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: input from user character
 * Return: 1 if true 0 if false
 */

int _isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
{
return (1);
}
else
return (0);

}
