/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

int is_div(int x);

int main() {
    for (int i = 20; i <= 4294967296; i++) { //Inputing i's to is_div.
        if (is_div(i)) {
            printf("%d\n", i);
            break;  //Smallest case is the first one.
        }
    }
}

int is_div(int x) {
    for (int i = 2; i <= 20; i++) { // Trying to divide x by i from a specified range.
        if (x % i != 0) // If x survives this loop, it is indeed divisible by all of i's.
            return 0;
    }
    return 1;
}
