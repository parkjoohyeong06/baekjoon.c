#include <stdio.h>

int main(){
	long long int n;
	int b;
	char result[100];
	int idx = 0;
	scanf("%lld %d", &n, &b);
	while(n>0){
		int r = n % b;
		if(r<10)
			result[idx++] = r + '0';
		else
			result[idx++] = r - 10 + 'A';
			
		n /= b;
	}
	for(int i=idx-1;i>=0;i--)
		printf("%c", result[i]);
}
