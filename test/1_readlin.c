#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

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
	int i, status;
	unsigned int count;
	pid_t child_pid;

	
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
break_string(buffer, " ", str);

	
	
	for (i = 0; i < 3; i++)
	{
		fork();
		child_pid = getpid();
		printf("child pid %d\n", child_pid);
		
		execve(str[0], str, NULL);
		
		
		wait(&status);
		
	}


		
	
	
	

  
  


	
  
  return (0);
  
  
}
