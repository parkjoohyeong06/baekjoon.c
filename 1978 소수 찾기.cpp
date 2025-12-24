#include <stdio.h>

int main(){
	int t, arr[1001], sum=0;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		int isPrime=1; // 소수이면 1 
		scanf("%d", &arr[i]);
		if(arr[i] < 2) isPrime = 0;
		for(int j=2;j*j<arr[i];j++) // 조건식의 j*j<=arr[i]는 루트arr[i] 까지만 검사한다는 의미이다. 
			if(arr[i] % j != 0){
				isPrime = 0;
				break;
			}
			if(isPrime == 1) sum++;
	}
	printf("%d", sum);
	return 0;
}
