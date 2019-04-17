#include<stdio.h>

union d{
int i;
char c[2];
};

void main(){
union d o;
o.i=9;
//o.c[0]='N';
printf("%d\n%d\n%d\n%d\n",sizeof(int),sizeof(char),sizeof(float),sizeof(double));
printf("i:%d\nc1:%c\nc2:%c\n",o.i,o.c[0],o.c[1]);
};
