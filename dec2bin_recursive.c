#include<stdio.h>

char bits[50];
int i = 0;

int dec2bin(int n) {
    if (n < 1) return 0;

    bits[i++] = (n % 2 == 0) ? '0' : '1';
    return dec2bin(n / 2);
}

int main() {
    int n;
    scanf("%d", &n);
    dec2bin(n);

    printf("%d = %s", n, strrev(bits));
}
