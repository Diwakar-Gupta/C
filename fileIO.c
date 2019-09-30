#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *f=fopen("./funDec.c","a+");
    char c[10];
    fscanf(f,"%s",c);
    printf("%s",c);
    
    return 0;
}