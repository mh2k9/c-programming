#include<stdio.h>

int isArmstrong(int n);

int main() {
    int n;
    scanf("%d", &n);
    isArmstrong(n);

    return 0;
}

int isArmstrong(int n) {
    int sum = 0, original = n, rem;
    while (n > 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    printf("%d is%s armstrong.\n", original, sum == original ? "" : " not");
}
