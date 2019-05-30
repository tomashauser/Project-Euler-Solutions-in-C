/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <stdio.h>
#define LENGTH 100

int *get_n_primes();
int is_prime(int num);

int main() {
    int *primes, index = 0, maxDiv = 0;
    int num = 13195;
    primes = get_n_primes();
    while(index < LENGTH) {
        if (num % primes[index] == 0) {
            maxDiv = primes[index];
            printf("%d ", maxDiv);
        }
        if (primes[index] > (num / 2)) break; // A prime divisor cannot be bigger than num/2.
        index++;
    }
}

int is_prime(int num) {
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2) {
         if (num % i == 0)
             return 0;
     }
     return 1;
}

int *get_n_primes() {
    static int primes[LENGTH], index = 1;
    primes[0] = 2;
    for (int i = 3; index < LENGTH; i += 2) {
        if (is_prime(i)) {
            primes[index] = i;
            index++;
        }
    }
    return primes;
}
