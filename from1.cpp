#include <stdio.h>

int from1(int n){// �Լ�(�޴� ����)
	int sum=0;
	for(int i=0;i<n;i++)
		sum += (i+1);
	return sum;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",from1(n));
	return 0;
}
