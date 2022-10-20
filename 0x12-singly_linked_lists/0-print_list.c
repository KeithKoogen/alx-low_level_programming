/**
* print_list - prints all the elements of a list_t list
* @h: a list_t
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i;
	int j;

	i = 0;

	while (n != NULL)
	{
		++i;
		
		if (n->len < 10)
		{
			_putchar('[');
			_putchar((n->len) + 48);
			_putchar(']');
		}
		if (n->str != NULL)
		{
			j = 0;
			while (str[j] != '\0')
			{
				_putchar(j);
			}
		}
		else
		{
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}

		n = n->next;
	}

	return (i);
}
