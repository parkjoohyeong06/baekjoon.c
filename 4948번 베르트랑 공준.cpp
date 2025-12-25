#include <stdio.h>

int main(){
    int n;

    while(1){
        scanf("%d", &n);
        if(n == 0) break;

        int sum = 0;

        for(int i = n + 1; i <= 2 * n; i++){
            int isPrime = 1;

            if(i < 2) continue;

            for(int j = 2; j * j <= i; j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime) sum++;
        }

        printf("%d\n", sum);
    }
    return 0;
}

