#include <stdio.h>

int fibonacci(int n){
	if(n<2){
		return n;
	}
	return (fibonacci(n-1)+fibonacci(n-2));
} 

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fibonacci(n));
	return 0;
}
