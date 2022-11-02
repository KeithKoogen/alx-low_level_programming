#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	
	i = 0;


  
  size = 32;
  
  buffer = malloc(sizeof(char) * size);
	
  
  do 
  {  
  printf("$ ");  
  characters = getline(&buffer, &size, stdin);
  } while (characters == 1);
	
	
str = malloc(sizeof(char *) * 3);	
break_string(buffer, " ", str);
	
	while (str[i] != NULL)
	{
		printf("%s\n", str[i]);
		++i;
	}

		
	
	
	

  
  


	
  
  return (0);
  
  
}
