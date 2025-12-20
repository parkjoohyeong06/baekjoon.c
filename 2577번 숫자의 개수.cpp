#include <stdio.h>
int main(){
	int arr[10] = {0}, hello[3], times=1, digit;
	for(int i=0;i<3;i++){
		scanf("%d", &hello[i]);
		times *= hello[i];
	}
	while (times > 0) {
    digit = times % 10;
    arr[digit]++;
    times /= 10;
	}
	for(int i=0;i<10;i++){
		printf("%d\n", arr[i]);
	}
}
