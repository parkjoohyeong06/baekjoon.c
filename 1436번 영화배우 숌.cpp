#include <stdio.h>
#include <string.h>
int main(){
	int i=666;
	int n;
	scanf("%d", &n);
	int count = 0;
	while(1){
		char buf[20];
		sprintf(buf, "%d", i);
		if(strstr(buf, "666")) count++;
		if(count == n){
			printf("%d", i);
			break;
		}
		i++;
	}
}
