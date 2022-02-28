#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	printf("RAND_MAX:%d\n", RAND_MAX);
	for (i=0; i<10; i++)
	{
		printf("%d\n", rand());
	}
	return 0;
}

