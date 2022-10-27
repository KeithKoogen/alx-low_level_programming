#include "main.h"

/**
* get_endianness - determines the endianess of a system
* Return: 0 if BIg Endian 1 if Little Endian
*/

int get_endianness(void)
{
	unsigned int i;
	
	char *c;
	
	c = &i;
	i = 1;
	
	
   if (*c)   
       return (1);
   else
       return (0);
	
}
