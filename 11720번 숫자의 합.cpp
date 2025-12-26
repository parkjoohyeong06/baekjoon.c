#include <stdio.h>

int main(){
	int t, sum=0;
	char arr[100];
	scanf("%d", &t);
	scanf("%s", arr);
	for(int i=0;i<t;i++){
		sum += arr[i] - '0';
	}
	printf("%d", sum);
}
