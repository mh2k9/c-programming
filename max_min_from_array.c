#include<stdio.h>

int main() {
    int min = 32767,
        max = -32768, i,
        arr[] = {50, 2, 64, 87, 74},
        len = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < len; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Max = %d, Min = %d", max, min);

    return 0;
}
