#include <stdio.h>
#include <string.h>

int main(){
	char arr[101];
	int alpha[26];
	for(int i=0;i<26;i++){
		alpha[i] = -1;
	}
	scanf("%s", arr);
	for(int i=0;arr[i]!='\0';i++){
		int idx = arr[i] - 'a';
		if(alpha[idx] == -1)
			alpha[idx] = i;
	}
	/*---  Ãâ·Â  ---*/ 
	for(int i=0;i<26;i++){
		printf("%d ", alpha[i]);
	}
}
