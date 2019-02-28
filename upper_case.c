#include<stdio.h>

int main() {
    char c;

    while(1) {
        scanf("%c", &c);
        if (c == '\n') break;
        printf("%c", toupper(c));
    }
    return 0;
}
