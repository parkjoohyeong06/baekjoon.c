#include <stdio.h>

int main(){
	int t, visited[26], count=0;
	char arr[101];
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		int isGroup = 1;
		scanf("%s", arr);
		for(int k=0;k<26;k++)
			visited[k] = 0;
		visited[arr[0] - 'a'] = 1;
		for(int j=1;arr[j] != '\0';j++){
			if(arr[j] != arr[j-1])
				if(visited[arr[j] - 'a'] == 1){
					isGroup = 0;
					break;
				}
		visited[arr[j] - 'a'] = 1;
		}
		
		if(isGroup == 1)
			count++;
	}
	printf("%d", count);
}
