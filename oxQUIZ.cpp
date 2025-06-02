#include <stdio.h>

int main(){
	int testcase;
	char ox[80];
	scanf("%d", &testcase);
	for(int i=0;i<testcase;i++){
		int sum=0, add=0;
		scanf("%s", &ox);
		for(int j=0;ox[j]!='\0';j++){
			if(ox[j] == 'O'){
				add++;			//O를 만날때마다 1점씩 증가. OXO = 1점 0점 1점 
				sum+=add;
			}
			else
				add=0;
		}
		printf("%d\n", sum);
	}
	return 0;
}
