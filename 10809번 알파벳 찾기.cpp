#include <stdio.h>

int main(){
	char arr[101], alpha[26];
	scanf("%s", arr);
	for(int i=0;i<26;i++){
		alpha[i] = -1;
	}
	for(int i=0;arr[i] != '\0';i++){
		int idx=arr[i] - 'a';
		if(alpha[idx] == -1)
			alpha[idx] = i;
	}
	for(int i=0;i<26;i++)
		printf("%d ", alpha[i]);
}
