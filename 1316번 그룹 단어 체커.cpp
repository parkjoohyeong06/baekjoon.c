#include <stdio.h>

int main(){
	int isGroup = 0, t, count = 0;
	int alpha[26];
	char arr[101];
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		for(int i=0;i<26;i++)
			alpha[i] = 0;
		scanf("%s", arr);
		int prev = arr[0];
		alpha[prev - 'a'] = 1;
		isGroup = 1; // 그룹단어 이면 1, 아니면 0 
		for(int j=1;arr[j] != '\0';j++){
			if(arr[j] != prev){
				if(alpha[arr[j] - 'a'] == 1){
					isGroup = 0;
					break;
				}
				alpha[arr[j] - 'a'] = 1;
				prev = arr[j];
			}
		}
		if(isGroup)
			count++;
	}
	printf("%d", count);
}
