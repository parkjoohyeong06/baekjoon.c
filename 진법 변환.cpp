#include <stdio.h>

int main(){
	char n[100];
	int b, result = 0;
	scanf("%s %d", n, &b);
	for(int i=0;n[i]!='\0';i++){
		int value;
		
		if(n[i]>='0' && n[i]<='9')
			value = n[i] - '0';
		else
			value = n[i] - 'A' + 10;
		
		result = result * b + value;
	}
	printf("%d", result);
	return 0;
}
