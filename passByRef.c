#include<stdio.h>

void disp(int[]);

void dips(int a[]){
int i=0;
    for(;i<5;i++)
    printf("%d,",a[i]);
    printf("\n");

};

int main(){

    int s[]={1,2,3,4,5};

    disp(s);
	return 0;
}
