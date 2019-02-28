#include<stdio.h>

int main() {
    unsigned long n;
    int i = 0, base = 2;
    char bin[64];

    scanf("%u", &n);
    while(n > 0) {
       bin[i++] = (n % base) + '0';
       n /= base;
    }

    strrev(bin);
    printf("%s", bin);

    return 0;
}
