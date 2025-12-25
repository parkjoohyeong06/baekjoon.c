#include <stdio.h>

int main(){
	int n, m;
	int sum = 0, min=0;
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i=n;i<=m;i++){
		int isPrime = 1;
		if(i<2) continue;
		for(int j=2;j*j<=i;j++){
			if(i%j == 0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1){
			sum += i;
			if(min == 0)
				min = i;	
		}
	}
	if(min == 0) printf("-1");
	else if(min>0) printf("%d\n%d", sum, min);
}
