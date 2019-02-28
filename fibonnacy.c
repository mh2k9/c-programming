#include<stdio.h>

// 0 1 1 2 3 5 8 13 ......

int main() {
    int n, i = 2;
    unsigned long a = 0, b = 1, t;
    scanf("%d", &n);
    printf("%u %u", a, b);

    while (i <= n) {
        t = a;
        a = b;
        b += t;
        printf(" %u", b);
        i++;
    }

    return 0;
}
