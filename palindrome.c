#include<stdio.h>

int main() {
    char no[100];
    int l = 0, h, isPalindrome = 1;
    gets(no);
    h = strlen(no) - 1;
    while(l <= h) {
        if (no[l] != no[h]) {
            isPalindrome = 0;
            break;
        }
        l++; h--;
    }

    printf(isPalindrome == 1 ? "Palindrome" : "Not Palindrome");

    return 0;
}
