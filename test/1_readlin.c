#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *break_string(char *str, char *delimeter)
{
	char *token;
	token = strtok(str, delimeter);
	
	return (token);
}


int main(void)
{
  char *buffer, *str;
  size_t size, characters;


  
  size = 32;
  
  buffer = malloc(sizeof(char) * size);
	
  
  do 
  {  
  printf("$ ");  
  characters = getline(&buffer, &size, stdin);
  } while (characters == 1);
	
	
	
str = break_string(buffer, " ");
	while (str != NULL)
	{
		printf("%s\n", str);
		str = break_string(buffer, " ");
		
	}
	
	

  
  


	
  
  return (0);
  
  
}
