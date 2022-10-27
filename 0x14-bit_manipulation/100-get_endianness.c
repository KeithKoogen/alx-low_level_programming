#include "main.h"

/**
* get_endianness - determines the endianess of a system
* Return: 0 if BIg Endian 1 if Little Endian
*/

int get_endianness(void)
{
	unsigned int i;
	
	char *c;
	
	i = 1;
	c = (char*)&i;

	
	
   if (*c)   
       return (1);
   else
       return (0);
	
}
