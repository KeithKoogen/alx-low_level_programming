#include <unistd.h>
#include <stdio.h>

int main(void)
{
  pid_t pid_parent;
  
  pid_parent = getppid();
  
  printf("%u\n", pid_parent);
  
  return (0);
  
}
