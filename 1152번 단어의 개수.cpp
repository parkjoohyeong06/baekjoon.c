#include <stdio.h>
#include <string.h>
int main(){
	int word = 0;
	char arr[1000001];
	fgets(arr, sizeof(arr), stdin);
	arr[strcspn(arr, "\n")] = '\0';
	for(int i=0; arr[i] != '\0';i++){
		if(arr[i] != ' ' && (i == 0 || arr[i-1] == ' ')) word++;
	}
	printf("%d", word);
}
