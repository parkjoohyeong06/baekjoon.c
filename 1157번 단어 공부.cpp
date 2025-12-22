#include <stdio.h>
int main(){
	int alpha[26] = {0};
	char arr[1000001];
	scanf("%s", arr);
	for(int i=0;arr[i]!='\0';i++){
		int idx = 0;
		if(arr[i] >= 'a' && arr[i] <= 'z')
			idx = arr[i] - 'a';
		else if(arr[i] >= 'A' && arr[i] <= 'Z')
			idx = arr[i] - 'A';
		
		alpha[idx]++;
	}
/*--- alpha[i]가 최대인 지점 찾기 ---*/
	int max = alpha[0];
	int max_idx = 0;
	int dup = 0;
	for(int i=1;i<26;i++){
		if(max < alpha[i]){
			max = alpha[i];
			max_idx = i;
			dup = 0;
		}
		else if(alpha[i] == max){
			dup = 1;
		}
	}
	if(dup == 1){
		printf("?");
	}
	else if(dup == 0){
		printf("%c", max_idx + 'A');
	}
}
