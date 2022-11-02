#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int count_args(char *str, char *delimeter)
{
	unsigned int count;
	char *buffer;
	char *token;
	
	buffer = malloc(sizeof(str));
	strcpy(buffer, str);

	count = 0;
	
	token = strtok(buffer, delimeter);

	while (token != NULL)
	{
		++count;
		token = strtok(NULL, " ");
	}
	free(buffer);
	return (count + 1);
}

void break_string(char *str, char *delimeter, char **ptr)
{
	char *token;
	int i;
	
	i = 0;
	
	token = strtok(str, delimeter);
	
	while (token != NULL)
	{
		ptr[i] = malloc(sizeof(char) * strlen(token + 1));
		strcpy(ptr[i], token);
		token = strtok(NULL, " ");
		++i;
	}
	
}


int main(void)
{
  char *buffer, **str;
  size_t size, characters;
	int i;
	unsigned int count;
	
	i = 0;


  
  size = 32;
  
  buffer = malloc(sizeof(char) * size);
	
  
  do 
  {  
  printf("$ ");  
  characters = getline(&buffer, &size, stdin);
  } while (characters == 1);

	count = count_args(buffer, " ");
	
str = malloc(sizeof(char *) * count);	
		printf("%d\n", count);
break_string(buffer, " ", str);
	
	while (str[i] != NULL)
	{
		printf("last while loop: %s\n", str[i]);
		++i;
	}


		
	
	
	

  
  


	
  
  return (0);
  
  
}
