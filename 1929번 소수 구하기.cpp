#include <stdio.h>

int main(){
	int n, m, arr[1000], idx = 0;
	scanf("%d %d", &n, &m);
	for(int i=n;i<=m;i++){
		int isPrime = 1;
		if(i<2) continue;
		for(int j=2;j*j<=i;j++){
			if(i%j == 0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1)
			arr[idx++] = i;
	}
	for(int i=0;i<idx;i++)
		printf("%d\n", arr[i]);
}
