#include<stdio.h>

int main() {
    unsigned long n;
    int i = 0, base = 8;
    char oct[64], digit[1];
    scanf("%u", &n);
    while(n > 0) {
       //sprintf(digit, "%d", n % base); // Convert to string
       oct[i++] = (n % base) + '0';
       n /= base;
    }

    strrev(oct);
    printf("%s", oct);

    return 0;
}
