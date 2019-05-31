/*
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include <stdio.h>

int main() {
    int sum_of_squares = 0, square_of_sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum_of_squares += i * i;
        square_of_sum += i; // Or we can compute this with arithmetic series formula, but I like it this way.
    }
    square_of_sum *= square_of_sum;
    printf("%d\n", square_of_sum - sum_of_squares); //25164150
}
