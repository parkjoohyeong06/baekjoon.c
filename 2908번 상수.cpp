#include <stdio.h>

int main(){
	char a[4], b[4];
	scanf("%s %s", a, b);
	int new_a = (a[2] - '0') * 100 + (a[1] - '0') * 10 + (a[0] - '0');
	int new_b = (b[2] - '0') * 100 + (b[1] - '0') * 10 + (b[0] - '0');
	if(new_a > new_b)
		printf("%d", new_a);
	else if(new_b > new_a)
		printf("%d", new_b);
}
