#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    char* cro[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int count = 0;

    for (int i = 0; str[i] != '\0'; count++) {
        // "dz=" 먼저 체크 (3글자니까 우선순위 높음)
        if (strncmp(&str[i], "dz=", 3) == 0) {
            i += 3;
        }
        // 나머지 크로아티아 알파벳들
        else if (
            strncmp(&str[i], "c=", 2) == 0 ||
            strncmp(&str[i], "c-", 2) == 0 ||
            strncmp(&str[i], "d-", 2) == 0 ||
            strncmp(&str[i], "lj", 2) == 0 ||
            strncmp(&str[i], "nj", 2) == 0 ||
            strncmp(&str[i], "s=", 2) == 0 ||
            strncmp(&str[i], "z=", 2) == 0
        ) {
            i += 2;
        }
        else {
            i += 1; // 일반 알파벳은 한 글자
        }
    }

    printf("%d\n", count);
    return 0;
}

