#include <stdio.h>

int main(){
	long int n;
	static long int arr[1000000];
	scanf("%ld", &n);
	for(int i=0;i<n;i++)
		scanf("%ld", &arr[i]);
	long int max = arr[0];
	long int min = arr[0];
	for(int i=0;i<n;i++){
		if(min>arr[i])
			min = arr[i];
		if(max<arr[i])
			max = arr[i];
	}
	printf("%ld %ld", min, max);
}
