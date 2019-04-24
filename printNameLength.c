#include <stdio.h>
//#include <string.h>

int main(int argc, char **argv)
{
	char name[20];
	gets(name);
	int length=strlen(name);
	printf("name   :%s\nlength :%d",name,length);
	return 0;
}
