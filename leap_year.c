#include<stdio.h>

void leap_year(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                printf("%d is leap year\n", y);
            } else {
                printf("%d is not leap year\n", y);
            }
        } else {
            printf("%d is leap year\n", y);
        }
    } else {
        printf("%d is not leap year\n", y);
    }
}

int main() {
    int y;
    freopen("data/leap_year.in", "rb", stdin);
    while(scanf("%d", &y) != EOF) {
       leap_year(y);
    }
    return 0;
}
