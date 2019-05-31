/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <stdio.h>

int is_palindrome(int x);

int main() {
    int max = 0, product = 0;
    for (int i = 101; i < 1000; i++) { // Loop doing permutations without repetition because of commutative property of multiplication.
        for (int j = i; j < 1000; j++) { // Note that nested loop start from i.
            product = i * j;
           if (is_palindrome(product)) {
            if (product > max)
                max = product;
           }
        }
    }
    printf("%d\n", max); //906609
 }

int is_palindrome(int x) {
    char x_str[6]; // Product of two 3-digit numbers will always equal to a 6 digit number.
    sprintf(x_str, "%d", x); //int to char conversion
    for (int i = 0; i <= 2; i++) {
        if (x_str[i] != x_str[5 - i]) //Checking the first and last, second and one before last...
            return 0;
    }
    return 1;
}
