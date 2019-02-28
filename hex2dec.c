#include<stdio.h>

int main() {
    char num[32], hex[34] = {'0', 'X'};
    gets(num);
    strcat(hex, num);

    unsigned long n = strtol(hex, NULL, 16);
    printf("%ld", n);

    return 0;
}
