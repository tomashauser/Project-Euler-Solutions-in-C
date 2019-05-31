/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <stdio.h>

int is_prime(int num);

int main(){
    int index = 0; // Index will tell us when we will reach the 10 001st prime number.
    for (int i = 2; i <= 4294967296; i++) {
        if (is_prime(i))
            index++;
        if (index == 10001) {
            printf("%d\n", i);
            break;
        }
    }
}

int is_prime(int num) { //Efficiency of the entire program depends on this function. I used one from problem 3.
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2) {
         if (num % i == 0)
             return 0;
     }
     return 1;
}
