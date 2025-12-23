#include <stdio.h>

int main(){
	int n,m, arr[101], sum=0, max=0;
	scanf("%d %d", &n, &m);
/*--- n장의 카드 입력 ---*/ 
	for(int j=0;j<n;j++){
		scanf("%d", &arr[j]);
	}
	
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				sum = arr[i] + arr[j] + arr[k];
				if(sum<=m && sum>=max)
					max = sum;
			}
		}
	}
	printf("%d", max);
}
