#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *buffer;
  size_t size, characters;
  
  size = 32;
  
  
  buffer = malloc(sizeof(char) * size);
  
  printf("$ ");
  
  characters = getline(&buffer, &size, stdin);
  
  printf("%s\n", buffer);
  
  return (0);
  
  
}
