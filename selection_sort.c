#include<stdio.h>

int main() {
    int arr[] = {51, 87, 35, 14, 2, 69},
        len = sizeof(arr) / sizeof(arr[0]), i, j, index, min;
    for(i = 0; i < len - 1; i++) {
        min = arr[i];
        for (j = i + 1; j < len; j++) {
            if (arr[j] < min) {
                min = arr[j];
                index = j;
            }
        }
        if (arr[i] > min)
            arr[i] = arr[index] + (arr[index] = arr[i]) - arr[i];
    }

    for(i = 0; i < len; i++) printf("%d ", arr[i]);
}
