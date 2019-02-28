#include<stdio.h>

/*
* A number is said to be perfect number if the number is
* equal to the divisors of the number. Example:
* Divisors of 6 are 1, 2, 3. Hence 1 + 2 + 3 = 6
* Another perfect no: 28, 496, 8128, 33550336
*/

void perfectNo(unsigned n) {
    unsigned sum = 1, len = floor(sqrt(n)), i;
    for (i = 2; i <= len; i++) {
        if (n % i == 0) {
            sum = sum + i + (n / i);
        }
    }

    if (sum == n) {
        printf("%u is perfect\n", n);
    } else {
        printf("%u is not perfect\n", n);
    }
}

int main() {
    unsigned n;

    scanf("%u", &n);
    perfectNo(n);

    return 0;
}
