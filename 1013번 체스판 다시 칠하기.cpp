#include <stdio.h>

int main(){
    int n, m;
    char arr[51][51];
    int answer = 64;

    scanf("%d %d", &n, &m);

    for(int i=0;i<n;i++){
        scanf("%s", arr[i]);
    }

    for(int i=0;i<=n-8;i++){
        for(int j=0;j<=m-8;j++){
            int cntW = 0, cntB = 0;

            for(int x=i;x<i+8;x++){
                for(int y=j;y<j+8;y++){
                    if((x+y)%2==0){
                        if(arr[x][y] != 'W') cntW++;
                        if(arr[x][y] != 'B') cntB++;
                    } else {
                        if(arr[x][y] != 'B') cntW++;
                        if(arr[x][y] != 'W') cntB++;
                    }
                }
            }

            int cur = cntW < cntB ? cntW : cntB;
            answer = answer < cur ? answer : cur;
        }
    }

    printf("%d", answer);
}
