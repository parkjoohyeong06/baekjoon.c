#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    return 0;
}

int main(){
    char arr[21];

    while(1){
        scanf("%s", arr);
        if(strcmp(arr, "end") == 0)
            break;

        int isPswd = 1;
        int hasVowel = 0;
        int vowelCnt = 0;
        int consCnt = 0;

        int i;  // ?? 여기 중요
        for(i = 0; arr[i] != '\0'; i++){

            if(isVowel(arr[i])){
                hasVowel = 1;
                vowelCnt++;
                consCnt = 0;
            } else {
                consCnt++;
                vowelCnt = 0;
            }

            if(vowelCnt == 3 || consCnt == 3){
                isPswd = 0;
                break;
            }

            if(i > 0 && arr[i] == arr[i-1]){
                if(arr[i] != 'e' && arr[i] != 'o'){
                    isPswd = 0;
                    break;
                }
            }
        }

        if(hasVowel == 0)
            isPswd = 0;

        if(isPswd)
            printf("<%s> is acceptable.\n", arr);
        else
            printf("<%s> is not acceptable.\n", arr);
    }

    return 0;
}

