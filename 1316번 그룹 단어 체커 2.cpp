#include <stdio.h>
int main(){
	int t;
	int count = 0, visited[26];
	char arr[101];
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		int visited[26] = {0};
		int isGroup = 1;
		scanf("%s", arr);
		for(int j=0;arr[j]!='\0';j++){
			int idx = arr[j] - 'a';
			if(j>0 && arr[j] != arr[j-1]){
				if(visited[idx] == 1){
					isGroup = 0;
					break;
				}
			}
		visited[idx] = 1;
		}
		if(isGroup == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}
