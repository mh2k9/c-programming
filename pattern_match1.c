#include<stdio.h>
/****************************/
/**           1            **/
/**          232           **/
/**         34543          **/
/**        4567654         **/
/**       567898765        **/
/****************************/

int main() {
    int i, j, mid, n;
    scanf("%d", &n);

    for(i = 1, mid = 1; i <= n; i++, mid += 2) {
        for(j = n; j > i; j--) printf(" ");
        for(j = i; j <= mid; j++) printf("%d", j);
        for(j = mid - 1; j >= i; j--) printf("%d", j);
        printf("\n");
    }

    return 0;
}
