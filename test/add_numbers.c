#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
	int i, k;
	printf("welcome to sum program\n");
	i = atoi(argv[1]);
	k = atoi(argv[2]);
	
	printf("your sum is: %d\n");
	
	return (0);
}
