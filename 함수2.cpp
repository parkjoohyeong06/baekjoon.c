#include <stdio.h>
void printSort(int size, int arr[]){
	for(int i=1;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}
int main(){
	int size, arr[100];
	scanf("%d",&size);
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printSort(size, arr);
	return 0;
}
