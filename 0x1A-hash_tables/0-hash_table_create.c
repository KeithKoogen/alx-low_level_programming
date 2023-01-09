#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: size of the hash table
* Return: A pointer to a new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;
	
	i = 0;
	
	for (i = 0; i < size; i++)
	{
		new_hash_table[i] =  malloc(sizeof(hash_table_t));
		
	}

	

	if (new_hash_table == NULL)
		return (NULL);

	return (new_hash_table);

}
