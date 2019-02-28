# C Programming
This is my C programming repository and I'm writing different program following crucial strategies.

# An example of converting binary to decimal
I just have calculated the bit values considering their position and have sum the bits values.
Let a binary number 10110 and how we calculate the decimal value? It is not hard at all but quite easy.
10110 = 2^4 + 0 + 2^2 + 2^1 + 0.
All 0 bits value are 0.

```c
#include<stdio.h>
#define MAX_BIT 32

int main() {
    int i;
    unsigned long sum = 0;
    char bin[MAX_BIT];

    //freopen("inp.txt", "rb", stdin);
    scanf("%[^\n]%*c", bin);
    strrev(bin);

    for (i = 0; i < strlen(bin); i++) if (bin[i] == '1') sum += pow(2, i);
    printf("%u", sum);

    return 0;
}
```
