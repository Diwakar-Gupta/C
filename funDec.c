main (){
	
	void foo(),f();
	
	foo();
	
}


void foo(){
	void f();
	printf("in foo\n");
	f();
}

void f(){
	printf("in f");
}
