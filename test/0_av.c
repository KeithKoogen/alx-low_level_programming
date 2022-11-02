#include <stdio.h>

int main(int ac, char **av)
{
  int i;
  
  i = 0;
  
  while (av[i] != NULL)
    printf(av[i]);
  
  return (0);
  
}
