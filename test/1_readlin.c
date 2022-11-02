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
		ptr[i] = token;
		
		token = (str, delimeter);
		++i;
	}
	
}


int main(void)
{
  char *buffer;
  size_t size, characters;
	char **finalstring;
	int i;
	
	i = 0;
  
  size = 32;
  
  buffer = malloc(sizeof(char) * size);
	
  
  do 
  {  
  printf("$ ");  
  characters = getline(&buffer, &size, stdin);
  }
  while (characters == 1);
	
	finalstring = malloc(sizeof(char) * size);
	
	breakstring(buffer, " ", finalstring);
	
	while (finalstring[i] != NULL)
	{
  
  printf("%s\n", finalstring[i]);
		++i;
	}
  
  return (0);
  
  
}
