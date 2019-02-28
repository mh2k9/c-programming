#include<stdio.h>

int main() {
    char c;
    int wf = 0, count = 0;
    while(1) {
        scanf("%c", &c);
        if (c == '\n') {
            if (wf == 1) {
                count++;
            }
            break;
        }

        if (c == ' ') {
            if (wf == 1) {
                count++;
                wf = 0;
            }
        } else {
            wf = 1;
        }
    }

    printf("%d", count);

    return 0;
}
