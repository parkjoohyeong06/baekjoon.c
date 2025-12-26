#include <stdio.h>

int main(){
	int t, rot;
	char arr[21];
	scanf("%d", &t);
	while(t>0){
		scanf("%d %s", &rot, arr);
		for(int i=0;arr[i] != '\0';i++){
			for(int j=0;j<rot;j++)
				printf("%c", arr[i]);
			
		}
		printf("\n");
		
		t--;
	}
}
