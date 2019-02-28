#include<stdio.h>
#define MAX_BIT 32

int main() {
    int i;
    unsigned long sum = 0;
    char bin[MAX_BIT];

    //freopen("inp.txt", "rb", stdin);
    scanf("%[^\n]%*c", bin);
    strrev(bin);

    for (i = 0; i < strlen(bin); i++) if (bin[i] == '1') sum += pow(2, i);
    printf("%u", sum);

    return 0;
}
