#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t>0) {
        int c;
        scanf("%d", &c);

        int q = c / 25;
        c %= 25;
        int d = c / 10;
        c %= 10;
        int n = c / 5;
        c %= 5;
        int p = c;

        printf("%d %d %d %d\n", q, d, n, p);
        t--;
    }

    return 0;
}

