#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    char* cro[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int count = 0;

    for (int i = 0; str[i] != '\0'; count++) {
        // "dz=" ���� üũ (3���ڴϱ� �켱���� ����)
        if (strncmp(&str[i], "dz=", 3) == 0) {
            i += 3;
        }
        // ������ ũ�ξ�Ƽ�� ���ĺ���
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
            i += 1; // �Ϲ� ���ĺ��� �� ����
        }
    }

    printf("%d\n", count);
    return 0;
}

