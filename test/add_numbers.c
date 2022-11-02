#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
	int i, k;
	printf("welcome to sum program\n");
	i = atoi(argv[1]);
	k = atoi(argv[2]);
	
	printf("your sum is: %d\n", i + k);
	
	return (0);
}
