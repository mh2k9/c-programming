#include<stdio.h>
#define MAX 33
unsigned fact[MAX];

unsigned getFact(int n) {
    if (n < 2) return 1;
    if (fact[n] != 0) {
        return fact[n];
    }
    fact[n] = n * getFact(n - 1);
    return fact[n];
}
int main() {
    int i, n;
    for (i = 0; i < MAX; i++) fact[i] = 0;
    freopen("data/factorial.in", "rb", stdin);
    while(scanf("%d", &n) != EOF) {
        printf("%d! = %u\n", n, getFact(n));
    }

    return 0;
}
