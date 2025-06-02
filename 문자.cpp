#include <stdio.h>

int main(){
	//char arr[100] = {-1};	// 문자열이라 {-1} 불가능 
	int alpha[26]; // alpha[26] = NULL
	for(int i=0;i<26;i++)
		alpha[i]=-1;
	char arr[100];
	scanf("%s", arr);
	for(int j=0;arr[j] != '\0';j++){
		int idx = arr[j]-'a';
		if(alpha[idx]==-1)
			alpha[idx]=j;
	}
	for (int i = 0; i < 26; i++) {
    	printf("%d ", alpha[i]);
	}
	return 0;
}
