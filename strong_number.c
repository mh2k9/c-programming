#include<stdio.h>
#define MAX 9

int fact[MAX];
int isSstrong(int n);
int factorial(int n);

int main() {
    int n, i;

    for(i = 0; i < MAX; i++) fact[i] = 0;
    /*freopen("data/strong.in", "rb", stdin);
    freopen("data/strong.out", "w", stdout);

    while(scanf("%d", &n) != EOF) {
        isStrong(n);
    }*/

    scanf("%d", &n);
    isStrong(n);

    return 0;
}

int isStrong(int n) {
    int sum = 0, original = n, rem;
    while (n > 0) {
        rem = n % 10;
        sum += factorial(rem);
        n /= 10;
    }

    printf("%d is%s strong.\n", original, sum == original ? "" : " not");
}

int factorial(int n) {
    if (n < 2) return 1;
    if (fact[n] == 0)
        fact[n] = n * factorial(n - 1);
    return fact[n];
}
