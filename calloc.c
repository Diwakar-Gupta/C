#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int* p=calloc(5,4);
	*(p)=0;
	*(p+1)=1;
	*(p+7)=9;
	printf("%d \n%d\n%d\n",*p,*(p+1),*(p+7));
	return 0;
}
