/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include <stdio.h>

int is_prime(int num);

int main() {
    float sum = 2;
    for (int i = 3; i < 2000001; i += 2) {
        if (is_prime(i))
            sum += (float)i;
    }
    printf("%.0f\n", sum);
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
