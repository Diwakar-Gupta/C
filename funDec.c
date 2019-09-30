#include <stdio.h>

int main (){
	
	void foo();
	
	foo();
	return 0;
}


void foo(){
	void f();
	printf("in foo\n");
	f();
}

void f(){
	printf("in f");
}
