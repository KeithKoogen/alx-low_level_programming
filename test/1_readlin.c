#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>

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


int searchforfunction(char *str, char *directory)
{
		struct dirent *de;
  
   
    DIR *dr = opendir(directory);
  
    if (dr == NULL)
    {
        printf("Could not open current directory" );
        return 0;
    }
  

    while ((de = readdir(dr)) != NULL)
    {
	    if (strcmp(de->d_name, str) == 0)
	    {
		    closedir(dr);  
		    return (1);
	    }
    }
  
    closedir(dr);  
	return (0);
	
	
}


int main(int ac, char **av, char **env)
{
  char *buffer, **str, *path, *oldpath;
  size_t size, characters;
	int i, status;
	unsigned int count;
	pid_t child_pid;
	

	i = 0;
  size = 32;
	
	oldpath = "/bin/";
	

  
  buffer = malloc(sizeof(char) * size);
	
  
  do 
  {  
  printf("$ ");  
  characters = getline(&buffer, &size, stdin);
  } while (characters == 1);

	count = count_args(buffer, " ");
	
str = malloc(sizeof(char *) * count);	
break_string(buffer, " ", str);
	
	if (searchforfunction(str[0], "/bin/") == 1)
	{
		printf("function exists");
	}
	else
	{
		printf("function not found");
	}
	path = calloc(strlen(oldpath) + strlen(str[0]) + 1, (sizeof(char)));
	
	strcpy(path, oldpath);
	strcat(path, str[0]);
			printf("%s\n", path);
		str[0] = malloc(sizeof(path));
strcpy(str[0], path);
printf("str[0] %s", str[0]);

		child_pid = fork();
		
		if (child_pid == 0)
		{
			execve(path, str, env);
		}
		
		if (child_pid != 0)
		{
			wait(&status);
			printf("program has ended back to main program");
		}
		
	
		

  return (0);
  
  
}
