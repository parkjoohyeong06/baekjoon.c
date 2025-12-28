#include <stdio.h>

int main(){
	char arr[101];
	int croatia=0;
	scanf("%s", arr);
	for(int i=0;arr[i]!='\0';i++){
		if(arr[i] == 'd' && arr[i+1] == 'z' && arr[i+2] == '='){
			croatia++;
			i += 2;
		}
		else if(
		arr[i] == 'c' && arr[i+1] == '=' ||
		arr[i] == 'c' && arr[i+1] == '-' ||
		arr[i] == 'd' && arr[i+1] == '-' ||
		arr[i] == 'l' && arr[i+1] == 'j' ||
		arr[i] == 'n' && arr[i+1] == 'j' ||
		arr[i] == 's' && arr[i+1] == '=' ||
		arr[i] == 'z' && arr[i+1] == '='){
		croatia++;
		i += 1; }
		else
			croatia++;
	}
	printf("%d", croatia);
}
