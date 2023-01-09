/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

/**
* hash_djb2 - outputs a hash value from given string
* @str: a string to be hashed
* Return: A hash value
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;

	hash = hash_djb2(str);

	return (hash);
}
