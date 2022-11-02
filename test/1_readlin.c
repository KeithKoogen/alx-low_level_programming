#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *buffer;
  size_t size, characters;
  
  size = 32;
  
  
  buffer = malloc(sizeof(char) * size);
  
  do 
  {  
  printf("$ ");  
  characters = getline(&buffer, &size, stdin);
  }
  while (characters == 0);
  
  printf("%s\n%zu\n", buffer, characters);
  
  return (0);
  
  
}
