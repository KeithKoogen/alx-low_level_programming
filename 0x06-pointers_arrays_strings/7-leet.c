#include "main.h"

/**
* leet - converts a string to leet
* @str: a string
* Return: return a pointer to the string
*/

char *leet(char *str)
{
	int i;
	int j;
char letter[5][3] = {
	{'A', 'a', '4'},
	{'E', 'e', '3'},
	{'O', 'o', '0'},
	{'T', 't', '7'},
	{'L', 'l', '1'}
};
	i = 0;
while (str[i] != '\0')
{
	for (j = 0; j < 5; j++)
	{
		if (str[i] == letter[j][0] || str[i] == letter[j][1])
		{
			str[i] = letter[j][2]
		}
	}
	i++;
}
return (str);
}
