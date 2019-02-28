#include<stdio.h>
/****************************/
/**           1            **/
/**          212           **/
/**         32123          **/
/**        4321234         **/
/**       543212345        **/
/****************************/

int main() {
    int i, j, mid, n;
    scanf("%d", &n);

    for(i = 1, mid = 1; i <= n; i++, mid += 2) {
        for(j = n; j > i; j--) printf(" ");
        for(j = i; j > 1; j--) printf("%d", j);
        for(j = 1; j <= i; j++) printf("%d", j);
        printf("\n");
    }

    return 0;
}
