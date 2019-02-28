#include<stdio.h>

int isPrime(int n) {
    int len = floor(sqrt(n)), i, ret = 1;
    for (i = 2; i <= len; i++) {
        if (n % i == 0) {
            ret = 0;
            break;
        }
    }

    return ret;
}

int main() {
    int n, no;
    //freopen("inp.txt", "rb", stdin);
    scanf("%d", &n);

    while(--n > -1) {
        scanf("%d", &no);
        isPrime(no) == 1 ? printf("%d is prime\n", no) : printf("%d is not prime\n", no);
    }
    return 0;
}
