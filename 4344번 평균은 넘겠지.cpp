#include <stdio.h>

int main(){
	int c;
	scanf("%d", &c);
	for(int i=0;i<c;i++){
		int n, score[1001], sum=0, count=0;
		scanf("%d", &n);
		for(int j=0;j<n;j++){
			scanf("%d", &score[j]);
			sum += score[j];
		}
		double avg = (double)sum / n; //케이스별 전체평균
		for(int j=0;j<n;j++)
			if(score[j] > avg)
				count++;
		double percent = (double)count / n * 100;
		printf("%.3f%%\n", percent);
	}
	return 0;
}
