#include<stdio.h>

int main() {
    int i;
    for (i = 1; i < 101; i++)
        printf("%d is %s\n", i, (i % 2 == 0) ? "even" : "odd");
    return 0;
}
