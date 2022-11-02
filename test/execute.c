#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
  char *argv[] = {"./add_numbers", NULL};
  
  printf("welcome to main program");
  
  execve(argv[0], argv, NULL);
  
  return (0);
}
