#include <stdio.h>

int plus(int a, int b){
	return a+b;
}
int minus(int a, int b){
	return a-b;
}
int times(int a, int b){
	return a*b;
}
int divide(int a, int b){
	if(b!=0)
		return a/b;
}

int main(){
	int a,b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	if(c == '+')
		printf("= %d", plus(a,b)); 
	else if(c == '-')
		printf("= %d", minus(a,b));
	else if(c == 'x')
		printf("= %d", times(a,b));
	else if(c == '/')
		printf("= %d", divide(a,b));
	return 0;
}
