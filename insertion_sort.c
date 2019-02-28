#include<stdio.h>

int main() {
    int arr[] = {47, 1, 64, 78, 54, 61, 54, 94},
        len = sizeof(arr) / sizeof(arr[0]), i, j;
    for(i = 1; i < len; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                arr[i] = arr[j] + (arr[j] = arr[i]) - arr[i];
            }
        }
    }

    for(i = 0; i < len; i++) printf("%d ", arr[i]);
}
