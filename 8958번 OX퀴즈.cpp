#include <stdio.h>

int main(){
	int t;
	char arr[80];
	scanf("%d", &t);
	while(t--){
		scanf("%s", arr);
		int score=0;
		int sum=0;
		for(int j=0;arr[j]!='\0';j++){
			if(arr[j] == 'O'){
				score++;
				sum += score;
			}
			else if(arr[j] == 'X'){
				score = 0;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
