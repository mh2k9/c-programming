#include<stdio.h>

int main() {
    char str[100];
    int i;

    scanf("%[^\n]%*c", str);
    // without using strrev()
    for(i = strlen(str) - 1; i > -1; i--) {
        putchar(str[i]);
    }

    return 0;
}
