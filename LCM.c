#include<stdio.h>

int GCD(int a, int b) {
    if (a == 0) return b;
    return GCD(b % a, a);
}

int main() {
    int n1, n2;
    freopen("data/GCD.in", "rb", stdin);
    while(scanf("%d %d", &n1, &n2) != EOF) {
       printf("LCM(%d,%d) = %d\n", n1, n2, (n1 * n2) / GCD(n1, n2));
    }
    return 0;
}
