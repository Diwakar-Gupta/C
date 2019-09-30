#include <stdio.h>

void main(){

int i=0;

prnt:
printf("%d",i);
i++;
if(i<10)
goto prnt;

}
