#include<string.h>

void main(){
	
	char s[5];
	gets(s);
	char c[strlen(s)] ;
	gets(c);
	puts(s);
	puts(c);
	printf("%d\n",strcmp(s,c));
	strcpy(s,c);
	printf("after copying %d",strcmp(s,c));
}
