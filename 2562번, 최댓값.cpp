#include <stdio.h>

int main(){
	int arr[10], locate=0;
	for(int i=0;i<9;i++)
		scanf("%d",&arr[i]);
	int max = arr[0];
	for(int i=0;i<9;i++){
		if(max < arr[i]){
			max = arr[i];
			locate = i;  }
	}
	printf("%d\n%d", max, locate+1);
}
