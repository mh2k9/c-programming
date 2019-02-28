#include<stdio.h>
#define MAX 128

int main() {
    int serise[MAX], i, j;
    char c;

    for (i = 0; i < MAX; i++) serise[i] = 0;

    while (1) {
        scanf("%c", &c);
        if (c == '\n') break;

        serise[(int)c]++;
    }

    for (i = 0; i < MAX; i++) {
        if (serise[i] > 0) {
            for (j = 0; j < serise[i]; j++) {
                printf("%c", i);
            }
        }
    }

    return 0;
}
