#include <stdio.h>
 
int main(void) {
	float f(int a); //Function declarationn within another function
 
	float f1 = f(10);
	printf("%f",f1);
	
	int i = g();// integer return type function not declared at all.
	printf("\n%d",i); 
	return 0;
}
 
float f(int a){
	return 1.0;
}

int g(){
    return 1;
}
