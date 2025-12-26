#include <stdio.h>

int main(){
    char arr[1000001];
    int sum = 0;

    fgets(arr, sizeof(arr), stdin);

    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] != ' ' && arr[i] != '\n' && (i == 0 || arr[i-1] == ' '))
            sum++;
    }

    printf("%d", sum);
    return 0;
}

