#include "main.h"

/**
* _calloc - allocates memory for an array
* @nmemb: number of elements
* @size: size of each element
* Return: a pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned i,nb;
	char *p,*q;

    nb = n * size;
    
    if((p = q = malloc(nb)) != NULL)
        for(i = 0; i <nb; i++)
            *p++ = 0;
    return q;


}
