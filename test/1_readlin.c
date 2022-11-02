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
		strcpy(token, ptr[i]);
		token = strtok(NULL, " ");
	}
	
}


int main(void)
{
  char *buffer, **str;
  size_t size, characters;


  
  size = 32;
  
  buffer = malloc(sizeof(char) * size);
	
  
  do 
  {  
  printf("$ ");  
  characters = getline(&buffer, &size, stdin);
  } while (characters == 1);
	
	
str = malloc(sizeof(char *) * 3);	
break_string(buffer, " ", str);
	
		printf("%s\n", str);

		
	
	
	

  
  


	
  
  return (0);
  
  
}
